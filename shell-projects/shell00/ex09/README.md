## 🚨 Instructions

Magic files search for files in the folder within specific rules, printing out the results. Each "file type" has a specific number within the file, otherwise known as a "magic" number. This number tells your system what type of file it is.

#### Testing:
We can `man file` for a description for how to use your own magic files.
First run `file -C -m <your magic file>` to compile it,
and `file -m <your magic file> *` to use it.

#### To create our magic file (ft_magic) we break down the requirements:
* File has to be formatted appropriately to detect files of **42 file type**:
* This file type is defined by having a *42 'string' at the 42nd byte*
* If we go to `man magic` we can see the following break down:
```
42 string 42 magic 42 number found`
└┬┘└─┬──┘ └──┬───┘ └──────┬──────┘
 │   │       │            └─── Message
 │   │       └──────────────── Test
 │   └──────────────────────── Type
 └──────────────────────────── Offset
```

