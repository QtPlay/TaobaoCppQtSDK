#ifndef PRODUCTIMGDELETERESPONSE_H
#define PRODUCTIMGDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/ProductImg.h>


/**
 * @brief TOP RESPONSE API: 1.传入非主图ID  
2.传入产品ID  
删除产品非主图
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ProductImgDeleteResponse : public TaoResponse
{
public:
 virtual ~ProductImgDeleteResponse() { }

  ProductImg getProductImg() const;
  void setProductImg (ProductImg productImg);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回productimg中的：id,product_id
 **/
  ProductImg productImg;

};

#endif
