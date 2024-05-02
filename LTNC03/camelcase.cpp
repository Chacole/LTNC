int camelcase(string s) {
  int count = 1;
  int size = s.size();
  for (int i = 0; i < size; i++ ){
    if (s[i] >= 'A' && s[i] <= 'Z') count ++;
  }
  return count;
}
