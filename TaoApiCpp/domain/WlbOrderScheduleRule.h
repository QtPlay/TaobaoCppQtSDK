#ifndef WLBORDERSCHEDULERULE_H
#define WLBORDERSCHEDULERULE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 订单调度规则
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbOrderScheduleRule : public TaoDomain
{

public:
 virtual ~WlbOrderScheduleRule() { }

  QString getAreaIds() const;
  void setAreaIds (QString areaIds);
  qlonglong getBackupStoreId() const;
  void setBackupStoreId (qlonglong backupStoreId);
  qlonglong getDefaultStoreId() const;
  void setDefaultStoreId (qlonglong defaultStoreId);
  qlonglong getId() const;
  void setId (qlonglong id);
  QString getOptions() const;
  void setOptions (QString options);
  qlonglong getPresellStoreId() const;
  void setPresellStoreId (qlonglong presellStoreId);
  qlonglong getRuleId() const;
  void setRuleId (qlonglong ruleId);
  qlonglong getUserId() const;
  void setUserId (qlonglong userId);
  QString getUserNick() const;
  void setUserNick (QString userNick);
  
  virtual void parseResponse();

private:
/**
 * @brief 收货地址范围: 6位数的地址ID，用逗号分隔。如“140400,230500”。同一个卖家的订单调度规则中，设置的收货地址范围不能重复。
 **/
  QString areaIds;

/**
 * @brief 备用配送中心ID
 **/
  qlonglong backupStoreId;

/**
 * @brief 默认配送中心ID
 **/
  qlonglong defaultStoreId;

/**
 * @brief 订单调度规则ID
 **/
  qlonglong id;

/**
 * @brief 发货规则的额外规则设置： 允许组合，用逗号隔开. 
REMARK_STOP--有订单留言不自动下发; 
COD_STOP--货到付款订单不自动下发; 
CHECK_WAREHOUSE_DELIVER--检查仓库的配送范围
 **/
  QString options;

/**
 * @brief 预售配送中心ID（预留，暂未使用）
 **/
  qlonglong presellStoreId;

/**
 * @brief wlb_base_rule表的ID
 **/
  qlonglong ruleId;

/**
 * @brief 商家userId
 **/
  qlonglong userId;

/**
 * @brief 商品userNick
 **/
  QString userNick;

};

#endif  /* WLBORDERSCHEDULERULE_H */
