#ifndef PRODUCTPROPIMGUPLOADREQUEST_H
#define PRODUCTPROPIMGUPLOADREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ProductPropimgUploadResponse.h>

/**
 * TOP API: 传入产品ID  
传入props,目前仅支持颜色属性.调用taobao.itemprops.get.v2取得颜色属性pid, 
再用taobao.itempropvalues.get取得vid;格式:pid:vid,只能传入一个颜色pid:vid串;  
传入图片内容  
注意：图片最大为2M,只支持JPG,GIF,如果需要传多张，可调多次
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ProductPropimgUploadRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getId() const
;  void setId (qlonglong id);

 FileItem getImage() const
;  void setImage (FileItem image);

 qlonglong getPosition() const
;  void setPosition (qlonglong position);

 qlonglong getProductId() const
;  void setProductId (qlonglong productId);

 QString getProps() const
;  void setProps (QString props);


  virtual ProductPropimgUploadResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 产品属性图片ID
 **/
  qlonglong id;

/**
 * @brief 图片内容.图片最大为2M,只支持JPG,GIF.
 **/
  FileItem image;

/**
 * @brief 图片序号
 **/
  qlonglong position;

/**
 * @brief 产品ID.Product的id
 **/
  qlonglong productId;

/**
 * @brief 属性串.目前仅支持颜色属性.调用taobao.itemprops.get获取类目属性,取得颜色属性pid,再用taobao.itempropvalues.get取得vid;格式:pid:vid,只能传入一个颜色pid:vid串;
 **/
  QString props;

};

#endif  /* PRODUCTPROPIMGUPLOADREQUEST_H */
