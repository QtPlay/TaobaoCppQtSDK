#ifndef POLICYDETAIL_H
#define POLICYDETAIL_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 淘宝机票政策详情信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class PolicyDetail : public TaoDomain
{

public:
 virtual ~PolicyDetail() { }

  QString getChangeRule() const;
  void setChangeRule (QString changeRule);
  QString getDayOfWeeks() const;
  void setDayOfWeeks (QString dayOfWeeks);
  QString getEi() const;
  void setEi (QString ei);
  QString getExcludeDate() const;
  void setExcludeDate (QString excludeDate);
  QString getMemo() const;
  void setMemo (QString memo);
  QString getOfficeId() const;
  void setOfficeId (QString officeId);
  QString getRefundRule() const;
  void setRefundRule (QString refundRule);
  QString getReissueRule() const;
  void setReissueRule (QString reissueRule);
  QString getSpecialRule() const;
  void setSpecialRule (QString specialRule);
  
  virtual void parseResponse();

private:
/**
 * @brief 改签规则
 **/
  QString changeRule;

/**
 * @brief 当前政策仅支持一周的中的某些天，如1-7分别表示周一到周日
 **/
  QString dayOfWeeks;

/**
 * @brief ei项
 **/
  QString ei;

/**
 * @brief 当前政策排除的日期，录入日期将不在搜索结果页展现
 **/
  QString excludeDate;

/**
 * @brief 设置当前政策的备注信息
 **/
  QString memo;

/**
 * @brief officeId，长度限制6位(根据航信政策可能调整)
 **/
  QString officeId;

/**
 * @brief 退票规则
 **/
  QString refundRule;

/**
 * @brief 签转规则
 **/
  QString reissueRule;

/**
 * @brief 特殊说明
 **/
  QString specialRule;

};

#endif  /* POLICYDETAIL_H */
