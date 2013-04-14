#ifndef PRODUCTPROPIMGUPLOADRESPONSE_H
#define PRODUCTPROPIMGUPLOADRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/ProductPropImg.h>


/**
 * @brief TOP RESPONSE API: 传入产品ID  
传入props,目前仅支持颜色属性.调用taobao.itemprops.get.v2取得颜色属性pid, 
再用taobao.itempropvalues.get取得vid;格式:pid:vid,只能传入一个颜色pid:vid串;  
传入图片内容  
注意：图片最大为2M,只支持JPG,GIF,如果需要传多张，可调多次
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ProductPropimgUploadResponse : public TaoResponse
{
public:
 virtual ~ProductPropimgUploadResponse() { }

  ProductPropImg getProductPropImg() const;
  void setProductPropImg (ProductPropImg productPropImg);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 支持返回产品属性图片中的：url,id,created,modified
 **/
  ProductPropImg productPropImg;

};

#endif
