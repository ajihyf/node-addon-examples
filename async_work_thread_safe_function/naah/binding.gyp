{
    "targets": [
        {
            "target_name": "binding",
            "cflags!": ["-fno-exceptions"],
            "cflags_cc!": ["-fno-exceptions"],
            "sources": ["binding.cc"],
            "includes": [
                "node_modules/node-addon-api-helper/naah.gypi",
            ],
            'defines': ['NAPI_DISABLE_CPP_EXCEPTIONS'],
        }
    ]
}
