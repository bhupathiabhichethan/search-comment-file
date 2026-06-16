import os
import sys
import subprocess
import platform


FILE_TYPES = {
    "java": ".java",
    "python": ".py",
    "c": ".c",
    "cpp": ".cpp",
    "html": ".html",
    "css": ".css",
}


def open_file(filepath):

    system = platform.system()

    if system == "Windows":
        os.startfile(filepath)

    elif system == "Darwin":
        subprocess.run(["open", filepath])

    elif system == "Linux":
        subprocess.run(["xdg-open", filepath])

    else:
        print("Unsupported operating system")


def search_comments():

    if len(sys.argv) < 2:
        print('Usage: search-comment "keyword"')
        return

    keyword = sys.argv[1].lower()

    start_dir = os.path.expanduser("~")

    filetype = input(
        "Enter file type (java/python/c/cpp/html/css or press Enter for all): "
    ).strip().lower()

    extension = FILE_TYPES.get(filetype)

    print(f"\nScanning files from: {start_dir}")
    print("Please wait...\n")

    matches = []

    skip_dirs = {
        ".git",
        ".venv",
        "__pycache__",
        "node_modules"
    }

    for root, dirs, files in os.walk(start_dir):

        dirs[:] = [d for d in dirs if d not in skip_dirs]

        for file in files:

            if extension and not file.endswith(extension):
                continue

            filepath = os.path.join(root, file)

            try:

                with open(filepath, "r", errors="ignore") as f:

                    for lineno, line in enumerate(f, 1):

                        line_strip = line.strip()

                        if (
                            line_strip.startswith("//")
                            or line_strip.startswith("#")
                            or line_strip.startswith("/*")
                            or line_strip.startswith("*")
                        ):

                            if keyword in line_strip.lower():

                                matches.append(
                                    (filepath, lineno, line_strip)
                                )
                                break

            except Exception:
                pass

    if not matches:
        print("No files found.")
        return

    print("Found in files:\n")

    for i, (filepath, lineno, comment) in enumerate(matches, start=1):

        print(f"{i}. {filepath}")
        print(f"   Line {lineno}: {comment}\n")

    choice = input(
        "Enter the number of the file you want to open (or press Enter to skip): "
    )

    if not choice:
        return

    try:

        index = int(choice) - 1
        filepath = matches[index][0]

        open_file(filepath)

    except Exception as e:
        print("Error:", e)


if __name__ == "__main__":
    search_comments()