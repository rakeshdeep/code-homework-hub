import requests

def download_ppt(url, save_path="downloaded_presentation.pptx"):
    try:
        response = requests.get(url, stream=True)
        response.raise_for_status()  # Raise an error for bad status codes (4xx, 5xx)

        with open(save_path, "wb") as file:
            for chunk in response.iter_content(chunk_size=1024):
                if chunk:
                    file.write(chunk)

        print(f"Downloaded successfully: {save_path}")

    except requests.exceptions.RequestException as e:
        print(f"Error downloading the file: {e}")

# Example usage
ppt_url = "https://www.slideshare.net/slideshow/history-of-computer-77157884/77157884"
download_ppt(ppt_url, "my_presentation.pptx")
