#ifndef PRODUCTUPDATERESPONSE_H
#define PRODUCTUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Product.h>


/**
 * @brief TOP RESPONSE API: 传入产品ID  
可修改字段：outer_id,binds,sale_props,name,price,desc,image  
注意：1.可以修改主图,不能修改子图片,主图最大500K,目前仅支持GIF,JPG 
      2.商城卖家产品发布24小时后不能作删除或修改操作
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ProductUpdateResponse : public TaoResponse
{
public:
 virtual ~ProductUpdateResponse() { }

  Product getProduct() const;
  void setProduct (Product product);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回product数据结构中的：product_id,modified
 **/
  Product product;

};

#endif
