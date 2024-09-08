import os

def delete_files_with_extensions(extensions):
    # Walk through all directories and files in the current working directory
    for foldername, subfolders, filenames in os.walk(os.getcwd()):
        for filename in filenames:
            # Check if the file ends with any of the extensions we want to delete
            if any(filename.endswith(ext) for ext in extensions):
                file_path = os.path.join(foldername, filename)
                try:
                    os.remove(file_path)
                    print(f"Deleted: {file_path}")
                except Exception as e:
                    print(f"Error deleting {file_path}: {e}")

if __name__ == "__main__":
    extensions = ['.o', '.exe']  # Extensions to delete
    delete_files_with_extensions(extensions)
