
import cv2
import matplotlib.pyplot as plt

def quantize(img_1, levels):
    levels = [32, 16, 8, 4, 2]
    for i in levels:
        img_1 = cv2.imread("Lenna.png", 0)
        img_1 = img_1 // (256 // i)
        img_1 = img_1 * (256 // i)
        cv2.imwrite("Lenna_{}.png".format(i), img_1)

def pixel_by_pixel(img1_2, img2_2):
    img1_2 = cv2.imread(img1_2)
    img2_2 = cv2.imread(img2_2)
    img3_2 = img1_2 + img2_2
    cv2.imwrite("aimg3_pixel_by_pixel.jpg", img3_2)

def cv2_add(img1_2, img2_2): 
    img1_2 = cv2.imread(img1_2)
    img2_2 = cv2.imread(img2_2)
    img3_2 = cv2.add(img1_2, img2_2)
    cv2.imwrite("aimg3_cv2_add.jpg", img3_2)

def cv2_addWeighted(img1_2, img2_2): 
    img1_2 = cv2.imread(img1_2)
    img2_2 = cv2.imread(img2_2)
    img3_2 = cv2.addWeighted(img1_2, 0.5, img2_2, 0.5, 0)
    cv2.imwrite("aimg3_cv2_addWeighted.jpg", img3_2)


def subtract(img1_3, img2_3):
    img1_3 = cv2.imread(img1_3)
    img2_3 = cv2.imread(img2_3)
    img3_3 = img2_3 - img1_3
    cv2.imwrite("simg3_subtract.jpg", img3_3)

def thresholding(img1_3, img2_3):
    img1_3 = cv2.imread(img1_3)
    img2_3 = cv2.imread(img2_3)
    img3_3 = img2_3 - img1_3
    ret, img3_3 = cv2.threshold(img3_3, 127, 255, cv2.THRESH_BINARY)
    cv2.imwrite("simg3_thresholding.jpg", img3_3)


def teeth(img_4, mask_4):
    img_4 = cv2.imread(img_4)
    mask_4 = cv2.imread(mask_4)
    img_4 = img_4 * mask_4
    cv2.imwrite("teeth.jpg", img_4)


def chessboard(img_5, shading_5):
    img_5= cv2.imread(img_5)
    shading_5 = cv2.imread(shading_5)
    img_5 = img_5 - shading_5
    cv2.imwrite("ChessBoardGrad.png", img_5)


if __name__ == "__main__":
    # Q1 Depict how different levels of quantization for the grayscale image of‘Lenna.png’
    # would look. Reduce the default 256 levels to 32, 16, 8, 4and 2. Save each of the
    # output images.
    # Note: Reducing to two levels is thresholding, resulting
    # in a binary image - black andwhite.
    img_1 = "Lenna.png"
    levels = [32, 16, 8, 4, 2]
    quantize(img_1, levels)
    print("Generated images: Lenna_2.png, Lenna_4.png, Lenna_8.png, Lenna_16.png, Lenna_32.png")

    # Q2 Add the two images‘aimg1.jpg’and‘aimg2.jpg’inthe following ways.
    # a.Use pixel by pixel operation.
    # b.Use the opencv call cv2.add()
    # c.cv2.addWeighted()
    img1_2 = "aimg1.jpg"
    img2_2 = "aimg2.jpg"
    pixel_by_pixel(img1_2, img2_2)
    cv2_add(img1_2, img2_2)
    cv2_addWeighted(img1_2, img2_2)
    print("Generated images: aimg3_pixel_by_pixel.jpg, aimg3_cv2_add.jpg, aimg3_cv2_addWeighted.jpg")
    
    # Q3 Subtract the image‘simg1.png’from‘simg2.png’to
    # extract the additional hand in theframe. Then applythresholding
    # to convert to a binaryimage to enhance and view
    # the difference (Use cv2.threshold() and select an appropriate threshold)
    img1_3 = "simg1.png"
    img2_3 = "simg2.png"
    subtract(img1_3, img2_3)
    thresholding(img1_3, img2_3)
    print("Generated images: simg3_subtract.jpg, simg3_thresholding.jpg")
    
    # Q4 In the image‘teeth.jpg’has two teeth with fillings.
    # We want to isolate these teethalone. For this we have a mask image‘mask.jpg’ which
    # defines the‘region of interest’in the image. Use multiplication operations
    # to obtain the resulting image with only the teeth with fillings.\
    # (note: we intend to multiply the pixel intensities with 0 or 1depending on the mask)
    img_4 = "teeth.jpg"
    mask_4 = "mask.jpg"
    teeth(img_4, mask_4)
    print("Generated images: teeth.jpg")

    # Q5 The chessboard pattern image‘ChessBoardGrad.png’has an undesired shadingeffect over it.\
    # The shading pattern itself is given in‘shading.png’. Obtain a corrected
    # image without the shading by dividing the faulty image by the shading pattern.
    img_5 = "ChessBoardGrad.png"
    shading_5 = "shading.png"
    chessboard(img_5, shading_5)
    print("Generated images: ChessBoardGrad.png")