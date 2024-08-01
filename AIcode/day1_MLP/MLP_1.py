import torch
from torch import nn


class MLP_Net_v1(nn.Module):
    # 初始化网络
    def __init__(self):
        super().__init__()
        self.layers = nn.Sequential(
            nn.Linear(3, 5),
            nn.Linear(5, 3),
            nn.Linear(3, 2)
        )

    # 使用网络
    def forward(self, x):
        return self.layers(x)


if __name__ == '__main__':
    input_data = torch.randn(1, 3)
    net = MLP_Net_v1()
    out = net.forward(input_data)
    print(out)
    print(out.shape)
