const runWorker = require('../build/Release/binding');

runWorker.runSimpleAsyncWorker(2, AsyncWorkerCompletion);

runWorker.runSimpleAsyncWorker(4, AsyncWorkerCompletion);

runWorker.runSimpleAsyncWorker(8, AsyncWorkerCompletion);

function AsyncWorkerCompletion (err, result) {
    if (err) {
        console.log("SimpleAsyncWorker returned an error: ", err);
    } else {
        console.log("SimpleAsyncWorker returned '"+result+"'.");
    }
};
