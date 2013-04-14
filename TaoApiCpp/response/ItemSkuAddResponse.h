#ifndef ITEMSKUADDRESPONSE_H
#define ITEMSKUADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Sku.h>


/**
 * @brief TOP RESPONSE API: 新增一个sku到num_iid指定的商品中  
传入的iid所对应的商品必须属于当前会话的用户
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemSkuAddResponse : public TaoResponse
{
public:
 virtual ~ItemSkuAddResponse() { }

  Sku getSku() const;
  void setSku (Sku sku);
  virtual void parseNormalResponse();

 private:
/**
 * @brief sku
 **/
  Sku sku;

};

#endif
