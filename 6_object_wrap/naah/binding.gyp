{
    "targets": [
        {
            "target_name": "addon",
            "cflags!": ["-fno-exceptions"],
            "cflags_cc!": ["-fno-exceptions"],
            "sources": ["addon.cc", "myobject.cc"],
            "includes": [
                "node_modules/node-addon-api-helper/naah.gypi",
            ],
            'defines': ['NAPI_DISABLE_CPP_EXCEPTIONS'],
        }
    ]
}
