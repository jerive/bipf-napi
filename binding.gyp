{
  "targets": [
    {
      "target_name": "binding",
      "sources": [ "src/binding.cc" ],
      "include_dirs": [
          "<!(node -e \"require('napi-macros')\")"
      ],
      "libraries": [
        "https://github.com/sorribas/varint.c/archive/refs/heads/master.zip"
      ]
    }
  ]
}
