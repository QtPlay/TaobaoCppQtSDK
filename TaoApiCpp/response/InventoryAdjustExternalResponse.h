#ifndef INVENTORYADJUSTEXTERNALRESPONSE_H
#define INVENTORYADJUSTEXTERNALRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/TipInfo.h>


/**
 * @brief TOP RESPONSE API: 商家非交易调整库存，调拨出库、盘点等时调用
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryAdjustExternalResponse : public TaoResponse
{
public:
 virtual ~InventoryAdjustExternalResponse() { }

  QString getOperateCode() const;
  void setOperateCode (QString operateCode);  QList<TipInfo> getTipInfos() const;
  void setTipInfos (QList<TipInfo> tipInfos);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 操作返回码
 **/
  QString operateCode;

/**
 * @brief 提示信息
 **/
  QList<TipInfo> tipInfos;

};

#endif
