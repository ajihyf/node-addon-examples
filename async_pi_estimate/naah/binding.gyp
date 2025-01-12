{
    "targets": [
        {
            "target_name": "addon",
            "sources": [
                "addon.cc",
                "pi_est.cc",
                "sync.cc",
                "async.cc"
            ],
            'cflags!': ['-fno-exceptions'],
            'cflags_cc!': ['-fno-exceptions'],
            "includes": [
                "node_modules/node-addon-api-helper/naah.gypi",
            ],
            'conditions': [
                ['OS=="win"', {
                    "msvs_settings": {
                        "VCCLCompilerTool": {
                            "ExceptionHandling": 1
                        }
                    }
                }],
                ['OS=="mac"', {
                    "xcode_settings": {
                        "CLANG_CXX_LIBRARY": "libc++",
                        'GCC_ENABLE_CPP_EXCEPTIONS': 'YES',
                        'MACOSX_DEPLOYMENT_TARGET': '10.7'
                    }
                }]
            ]
        }
    ]
}
