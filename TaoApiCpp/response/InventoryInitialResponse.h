#ifndef INVENTORYINITIALRESPONSE_H
#define INVENTORYINITIALRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/TipInfo.h>


/**
 * @brief TOP RESPONSE API: 商家仓库存初始化接口，直接按照商家指定的商品库存数进行填充，没有单据核对，不参与库存对账
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryInitialResponse : public TaoResponse
{
public:
 virtual ~InventoryInitialResponse() { }

  QList<TipInfo> getTipInfos() const;
  void setTipInfos (QList<TipInfo> tipInfos);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 提示信息
 **/
  QList<TipInfo> tipInfos;

};

#endif
