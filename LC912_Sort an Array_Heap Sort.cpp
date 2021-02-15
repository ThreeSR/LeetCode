class Solution {
public:
    void heapify (vector<int>& arr, int index, int len) { // 建堆
        int left = 2 * index + 1; // 递归方式构建大根堆(len是arr的长度，index是第一个非叶子节点的下标)
        int right = 2 * index + 2; // 根据堆的结构，可知有这样的left和right数值
        int maxIndex = index; // 因为是大根堆，所以关注max
        if ((left < len) && (arr[maxIndex] < arr[left])) { // 两个if判断，为了把三个节点的最大值找到。同时left和right不可超出索引
            maxIndex = left;
        }
        if ((right < len) && (arr[maxIndex] < arr[right])) {
            maxIndex = right;
        } 
        if (maxIndex != index) { // 如果有变动了
            swap(arr[maxIndex], arr[index]); // 那就把数值进行交换。这边的交换就是堆结构中节点的交换。把大的数值放在上面，小的当子节点。
            heapify(arr, maxIndex, len); // 递归调用，继续让该上浮的元素上浮
        }
    }
    void heapSort (vector<int>& arr, int size) { // 排序
        for (int i = size / 2 - 1; i >=0; i--) { // 从尾巴开始。倒序的原因和堆的结构与我们的定义有关。堆的顶端是我们要的，那个数值是
        // 经过全局比较得到的最大值或最小值。这样一来，最小的索引对应全局的比较，那么我们需要倒序的方式建堆。
            heapify(arr, i, size);
        }
        for (int i = size - 1; i >= 1; i--) { // 将最大的数值放在数组的末尾。堆排序的过程是弹出最大值。我们每次都把最大值放最后，
        // 得到的效果就是递增数组。
            swap(arr[0], arr[i]); // 将弹出的最大值放最后
            heapify(arr, 0, i); // 接下来把弹出的值排除在外，对堆的内部进行移动，得到新的弹出的最大值。
        // 这一段移动的代码还是很巧妙的 
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        heapSort(nums, nums.size());
        return nums;
    }
};