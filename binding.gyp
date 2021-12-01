{
  "targets": [
    {
      "target_name": "binding",
      "sources": [ 
        "src/binding.cc"
      ],
      "include_dirs": [
          "<!(node -e \"require('napi-macros')\")",
          "<(module_root_dir)/src"
      ],
      "libraries": [
      ]
    }
  ]
}
