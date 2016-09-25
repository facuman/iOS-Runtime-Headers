/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDataBookmarkContext : NSObject {
    NSMutableDictionary * _bookmarkDataURLsForFilenames;
    NSObject<OS_dispatch_queue> * _queue;
    TSUTemporaryDirectory * _temporaryDirectory;
}

- (void).cxx_destruct;
- (BOOL)bookmarkDataNeedsWriteForData:(id)arg1;
- (id)init;
- (id)makeBookmarkDataForData:(id)arg1 filename:(id)arg2 options:(unsigned int)arg3 error:(out id*)arg4;

@end