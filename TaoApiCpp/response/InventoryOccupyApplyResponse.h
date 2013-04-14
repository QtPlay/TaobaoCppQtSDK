#ifndef INVENTORYOCCUPYAPPLYRESPONSE_H
#define INVENTORYOCCUPYAPPLYRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/TipInfo.h>


/**
 * @brief TOP RESPONSE API: 商家申请预留库存
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryOccupyApplyResponse : public TaoResponse
{
public:
 virtual ~InventoryOccupyApplyResponse() { }

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
 * @brief 提示信息,  
如果错误为后端商品不存在，存储错误的商品ID  
如果错误为库存不足，存储商品的对应库存数  
如果为强制最大化占用，存储商品实际占用库存数
 **/
  QList<TipInfo> tipInfos;

};

#endif
