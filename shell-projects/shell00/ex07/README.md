## 🚨 Instructions

1. From the `resources.tar.gz` download folder provided by the assignment, copy the `a` and `sw.diff` files to your assignment folder.
2. Make a duplicate of `a`, naming it `b`.
3. Run the following in your terminal:
```bash
patch b sw.diff
```
4. Notice that b should be updated with new content.
5. To confirm that your patched worked correctly, run the following command:
```bash
diff a b > sw2.diff
```
6. Confirm that the 2 files `sw.diff` and `sw2.diff` are similar.
