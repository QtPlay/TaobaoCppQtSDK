#ifndef FENXIAOPRODUCTIMAGEUPLOADREQUEST_H
#define FENXIAOPRODUCTIMAGEUPLOADREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoProductImageUploadResponse.h>

/**
 * TOP API: 产品主图图片空间相对路径或绝对路径添加或更新，或者是图片上传。如果指定位置的图片已存在，则覆盖原有信息。如果位置为1,自动设为主图；如果位置为0，表示属性图片
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoProductImageUploadRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 FileItem getImage() const
;  void setImage (FileItem image);

 QString getPicPath() const
;  void setPicPath (QString picPath);

 qlonglong getPosition() const
;  void setPosition (qlonglong position);

 qlonglong getProductId() const
;  void setProductId (qlonglong productId);

 QString getProperties() const
;  void setProperties (QString properties);


  virtual FenxiaoProductImageUploadResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 产品图片
 **/
  FileItem image;

/**
 * @brief 产品主图图片空间相对路径或绝对路径
 **/
  QString picPath;

/**
 * @brief 图片位置，0-14之间。0：操作sku属性图片，1：主图，2-5：细节图，6-14：额外主图
 **/
  qlonglong position;

/**
 * @brief 产品ID
 **/
  qlonglong productId;

/**
 * @brief properties表示sku图片的属性。key:value形式，key是pid，value是vid。如果position是0的话，则properties需要是必传项
 **/
  QString properties;

};

#endif  /* FENXIAOPRODUCTIMAGEUPLOADREQUEST_H */
