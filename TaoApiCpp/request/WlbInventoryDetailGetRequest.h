#ifndef WLBINVENTORYDETAILGETREQUEST_H
#define WLBINVENTORYDETAILGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbInventoryDetailGetResponse.h>

/**
 * TOP API: 查询库存详情，通过商品ID获取发送请求的卖家的库存详情
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbInventoryDetailGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getInventoryTypeList() const
;  void setInventoryTypeList (QString inventoryTypeList);

 qlonglong getItemId() const
;  void setItemId (qlonglong itemId);

 QString getStoreCode() const
;  void setStoreCode (QString storeCode);


  virtual WlbInventoryDetailGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 库存类型列表，值包括： 
VENDIBLE--可销售库存 
FREEZE--冻结库存 
ONWAY--在途库存 
DEFECT--残次品库存 
ENGINE_DAMAGE--机损 
BOX_DAMAGE--箱损 
EXPIRATION--过保
 **/
  QString inventoryTypeList;

/**
 * @brief 商品ID
 **/
  qlonglong itemId;

/**
 * @brief 仓库编码
 **/
  QString storeCode;

};

#endif  /* WLBINVENTORYDETAILGETREQUEST_H */
