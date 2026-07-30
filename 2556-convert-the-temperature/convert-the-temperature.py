class Solution:
    def convertTemperature(self, celsius: float) -> List[float]:
        nums = []
        k = celsius + 273.15
        f = celsius * 1.80 + 32.00

        nums.append(k)
        nums.append(f)

        return nums