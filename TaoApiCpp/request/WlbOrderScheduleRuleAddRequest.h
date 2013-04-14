#ifndef WLBORDERSCHEDULERULEADDREQUEST_H
#define WLBORDERSCHEDULERULEADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbOrderScheduleRuleAddResponse.h>

/**
 * TOP API: 为订单的自动流转设置订单调度规则。规则设定之后，可以根据发货地区，精确路由订单至指定仓库处理。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbOrderScheduleRuleAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getBackupStoreId() const
;  void setBackupStoreId (qlonglong backupStoreId);

 qlonglong getDefaultStoreId() const
;  void setDefaultStoreId (qlonglong defaultStoreId);

 QString getOption() const
;  void setOption (QString option);

 QString getProvAreaIds() const
;  void setProvAreaIds (QString provAreaIds);


  virtual WlbOrderScheduleRuleAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 备用发货仓库服务id（通过taobao.wlb.subscription.query接口获得service_id）
 **/
  qlonglong backupStoreId;

/**
 * @brief 发货仓库服务id（通过taobao.wlb.subscription.query接口获得service_id）
 **/
  qlonglong defaultStoreId;

/**
 * @brief 发货规则的额外规则设置： 
REMARK_STOP--有订单留言不自动下发 
COD_STOP--货到付款订单不自动下发 
CHECK_WAREHOUSE_DELIVER--检查仓库的配送范围
 **/
  QString option;

/**
 * @brief 国家地区标准编码列表
 **/
  QString provAreaIds;

};

#endif  /* WLBORDERSCHEDULERULEADDREQUEST_H */
