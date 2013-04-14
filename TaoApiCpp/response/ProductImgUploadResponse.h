#ifndef PRODUCTIMGUPLOADRESPONSE_H
#define PRODUCTIMGUPLOADRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/ProductImg.h>


/**
 * @brief TOP RESPONSE API: 1.传入产品ID  
2.传入图片内容  
注意：图片最大为500K,只支持JPG,GIF格式,如果需要传多张，可调多次
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ProductImgUploadResponse : public TaoResponse
{
public:
 virtual ~ProductImgUploadResponse() { }

  ProductImg getProductImg() const;
  void setProductImg (ProductImg productImg);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回产品图片结构中的：url,id,created,modified
 **/
  ProductImg productImg;

};

#endif
