#ifndef ITEMUPDATELISTINGREQUEST_H
#define ITEMUPDATELISTINGREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/ItemUpdateListingResponse.h>

/**
 * TOP API: * 单个商品上架 
* 输入的num_iid必须属于当前会话用户
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemUpdateListingRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getNum() const
;  void setNum (qlonglong num);

 qlonglong getNumIid() const
;  void setNumIid (qlonglong numIid);


  virtual ItemUpdateListingResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需要上架的商品的数量。取值范围:大于零的整数。如果商品有sku，则上架数量默认为所有sku数量总和，不可修改。否则商品数量根据设置数量调整为num
 **/
  qlonglong num;

/**
 * @brief 商品数字ID，该参数必须
 **/
  qlonglong numIid;

};

#endif  /* ITEMUPDATELISTINGREQUEST_H */
