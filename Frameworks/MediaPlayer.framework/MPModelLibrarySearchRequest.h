/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibrarySearchRequest : MPModelRequest {
    int  _maximumResultsPerScope;
    MPMediaLibrary * _mediaLibrary;
    NSArray * _scopes;
    NSString * _searchString;
}

@property (nonatomic) int maximumResultsPerScope;
@property (nonatomic, retain) MPMediaLibrary *mediaLibrary;
@property (nonatomic, copy) NSArray *scopes;
@property (nonatomic, copy) NSString *searchString;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)maximumResultsPerScope;
- (id)mediaLibrary;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (id)scopes;
- (id)searchString;
- (void)setMaximumResultsPerScope:(int)arg1;
- (void)setMediaLibrary:(id)arg1;
- (void)setScopes:(id)arg1;
- (void)setSearchString:(id)arg1;

@end
