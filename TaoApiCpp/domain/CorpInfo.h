#ifndef CORPINFO_H
#define CORPINFO_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 国内机票订单行程购票数据结构录入【top订单优化】
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CorpInfo : public TaoDomain
{

public:
 virtual ~CorpInfo() { }

  QString getApplyName() const;
  void setApplyName (QString applyName);
  QString getApplyNo() const;
  void setApplyNo (QString applyNo);
  QDateTime getApplyTime() const;
  void setApplyTime (QDateTime applyTime);
  QString getCorprationId() const;
  void setCorprationId (QString corprationId);
  QString getCostCenter() const;
  void setCostCenter (QString costCenter);
  QString getCostCenterCode() const;
  void setCostCenterCode (QString costCenterCode);
  QString getCostOu() const;
  void setCostOu (QString costOu);
  QString getExtra() const;
  void setExtra (QString extra);
  QString getFormNo() const;
  void setFormNo (QString formNo);
  QString getFormStatus() const;
  void setFormStatus (QString formStatus);
  QString getReceiptsStatus() const;
  void setReceiptsStatus (QString receiptsStatus);
  QString getTripPersonName() const;
  void setTripPersonName (QString tripPersonName);
  QString getTripPersonNo() const;
  void setTripPersonNo (QString tripPersonNo);
  QString getWorkSpace() const;
  void setWorkSpace (QString workSpace);
  
  virtual void parseResponse();

private:
/**
 * @brief 申请人姓名
 **/
  QString applyName;

/**
 * @brief 申请人工号
 **/
  QString applyNo;

/**
 * @brief 申请时间
 **/
  QDateTime applyTime;

/**
 * @brief 集团id
 **/
  QString corprationId;

/**
 * @brief 成本中心
 **/
  QString costCenter;

/**
 * @brief 成本中心代码
 **/
  QString costCenterCode;

/**
 * @brief 费用归属OU的CODE
 **/
  QString costOu;

/**
 * @brief 扩展字段
 **/
  QString extra;

/**
 * @brief BPM的fromNO
 **/
  QString formNo;

/**
 * @brief 单据状态代码
 **/
  QString formStatus;

/**
 * @brief 单据状态描述
 **/
  QString receiptsStatus;

/**
 * @brief 出差人姓名
 **/
  QString tripPersonName;

/**
 * @brief 出差人工号
 **/
  QString tripPersonNo;

/**
 * @brief 工作地点
 **/
  QString workSpace;

};

#endif  /* CORPINFO_H */
