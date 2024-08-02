import torch
from torch import nn


class MLP_Net_v1(nn.Module):
    # 初始化网络
    def __init__(self):
        super().__init__()
        # 只能解决线性问题
        self.layers = nn.Sequential(
            nn.Linear(3, 5),
            nn.Linear(5, 3),
            nn.Linear(3, 2)
        )
        self.activate_layers = nn.Sequential(
            nn.Linear(3, 5),
            nn.Sigmoid(),
            nn.Linear(5, 3),
            nn.Sigmoid(),
            nn.Linear(3, 2),
            # 最后一层的激活函数很重要,要考录到输出的结果取值范围
            nn.Sigmoid(),
        )

    # 使用网络
    def forward(self, x):
        return self.activate_layers(x)


if __name__ == '__main__':
    input_data = torch.randn(1, 3)
    net = MLP_Net_v1()
    out = net.forward(input_data)
    print(out)
    print(out.shape)
