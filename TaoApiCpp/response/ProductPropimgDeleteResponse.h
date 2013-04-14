#ifndef PRODUCTPROPIMGDELETERESPONSE_H
#define PRODUCTPROPIMGDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/ProductPropImg.h>


/**
 * @brief TOP RESPONSE API: 1.传入属性图片ID  
2.传入产品ID  
删除一个产品的属性图片
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ProductPropimgDeleteResponse : public TaoResponse
{
public:
 virtual ~ProductPropimgDeleteResponse() { }

  ProductPropImg getProductPropImg() const;
  void setProductPropImg (ProductPropImg productPropImg);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回product_prop_img数据结构中的：product_id,id
 **/
  ProductPropImg productPropImg;

};

#endif
