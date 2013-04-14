#ifndef INVENTORYAUTHORIZEREMOVEALLRESPONSE_H
#define INVENTORYAUTHORIZEREMOVEALLRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/TipInfo.h>


/**
 * @brief TOP RESPONSE API: 移除该授权下的用户库存授权
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class InventoryAuthorizeRemoveallResponse : public TaoResponse
{
public:
 virtual ~InventoryAuthorizeRemoveallResponse() { }

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
