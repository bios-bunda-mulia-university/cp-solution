class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        image_width = len(image)
        for idx, row in enumerate(image):
            image[idx] = []
            for element in row:
                image[idx] = [1 - element] + image[idx]
            
        return image