{
    "targets": [
        {
            "target_name": "array_buffer_to_native",
            "cflags!": ["-fno-exceptions"],
            "cflags_cc!": ["-fno-exceptions"],
            "sources": ["array_buffer_to_native.cc"],
            "includes": [
                "node_modules/node-addon-api-helper/naah.gypi",
            ],
            'defines': ['NAPI_DISABLE_CPP_EXCEPTIONS'],
        }
    ]
}
