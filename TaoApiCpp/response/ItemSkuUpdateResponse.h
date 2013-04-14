#ifndef ITEMSKUUPDATERESPONSE_H
#define ITEMSKUUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Sku.h>


/**
 * @brief TOP RESPONSE API: *更新一个sku的数据  
*需要更新的sku通过属性properties进行匹配查找  
*商品的数量和价格必须大于等于0  
*sku记录会更新到指定的num_iid对应的商品中  
*num_iid对应的商品必须属于当前的会话用户
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemSkuUpdateResponse : public TaoResponse
{
public:
 virtual ~ItemSkuUpdateResponse() { }

  Sku getSku() const;
  void setSku (Sku sku);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 商品Sku
 **/
  Sku sku;

};

#endif
