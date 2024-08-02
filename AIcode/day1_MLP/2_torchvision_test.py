from torchvision import datasets, transforms

# minst数据集
train_data = datasets.MNIST(root=r"D:\code\AI_study_database", train=True, download=True)
test_data = datasets.MNIST(root=r"D:\code\AI_study_database", train=False, download=True)

image_data = train_data.data
image_data_shape = image_data.shape  # N, H, W, C
print(image_data_shape)
# ToPILImage的设计是基于对象的,使用需要先实例化再使用
to_pil = transforms.ToPILImage()
image = to_pil(image_data[0])
# show使用系统默认的看图工具查看图片
image.show()

# 查看标签
label = train_data.targets
label_shape = label.shape  # N
print(label_shape)
print(label[0])
