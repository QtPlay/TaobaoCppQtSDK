#ifndef PRODUCTIMGUPLOADREQUEST_H
#define PRODUCTIMGUPLOADREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ProductImgUploadResponse.h>

/**
 * TOP API: 1.传入产品ID  
2.传入图片内容  
注意：图片最大为500K,只支持JPG,GIF格式,如果需要传多张，可调多次
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ProductImgUploadRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getId() const
;  void setId (qlonglong id);

 FileItem getImage() const
;  void setImage (FileItem image);

 bool getIsMajor() const
;  void setIsMajor (bool isMajor);

 qlonglong getPosition() const
;  void setPosition (qlonglong position);

 qlonglong getProductId() const
;  void setProductId (qlonglong productId);


  virtual ProductImgUploadResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 产品图片ID.修改图片时需要传入
 **/
  qlonglong id;

/**
 * @brief 图片内容.图片最大为500K,只支持JPG,GIF格式.
 **/
  FileItem image;

/**
 * @brief 是否将该图片设为主图.可选值:true,false;默认值:false.
 **/
  bool isMajor;

/**
 * @brief 图片序号
 **/
  qlonglong position;

/**
 * @brief 产品ID.Product的id
 **/
  qlonglong productId;

};

#endif  /* PRODUCTIMGUPLOADREQUEST_H */
