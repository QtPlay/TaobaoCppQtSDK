#ifndef WLBORDERSCHEDULERULEUPDATEREQUEST_H
#define WLBORDERSCHEDULERULEUPDATEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbOrderScheduleRuleUpdateResponse.h>

/**
 * TOP API: 修改物流宝订单调度规则
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbOrderScheduleRuleUpdateRequest : public TaoRequest
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

 qlonglong getScheduleRuleId() const
;  void setScheduleRuleId (qlonglong scheduleRuleId);


  virtual WlbOrderScheduleRuleUpdateResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 备用发货仓库id
 **/
  qlonglong backupStoreId;

/**
 * @brief 默认发货仓库id
 **/
  qlonglong defaultStoreId;

/**
 * @brief 订单调度规则的额外规则设置： REMARK_STOP--有订单留言不自动下发 COD_STOP--货到付款订单不自动下发 CHECK_WAREHOUSE_DELIVER--检查仓库的配送范围
 **/
  QString option;

/**
 * @brief 国家地区标准编码列表
 **/
  QString provAreaIds;

/**
 * @brief 要修改的订单调度规则明细id
 **/
  qlonglong scheduleRuleId;

};

#endif  /* WLBORDERSCHEDULERULEUPDATEREQUEST_H */
