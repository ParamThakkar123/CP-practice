int max(vector<int> &a, int n) {
  int maxi = INT_MIN;
  for (auto i : a) {
    if (i > maxi)
      maxi = i;
  }

  return maxi;

}

int sum(vector<int> &a, int n) {
  long long sum = 0;
  for (auto i : a) {
    sum += i;
  }
  return int(sum);
}

int check(vector<int> &a, int n, int minPages) {
  int cnt = 1;
  int curr = 0;

  for (int i = 0; i < n; i++) {
    if (curr + a[i] <= minPages) {
      curr += a[i];
    } 
    else {
      cnt++;
      curr = a[i];
    }
  }
  return cnt;

}

int findPages(vector<int> &a, int n, int m) {
  if (m > n)
    return -1;
    
  int low = max(a, n);
  int high = sum(a, n);

  int ans = -1;
  while (low <= high) {
  
    int mid = (low + high) / 2;
	if (check(a, n, mid) <= m) {
      ans = mid;
      high = mid - 1;
    } 
    else {
      low = mid + 1;
    }
  }  
  return ans;
}
