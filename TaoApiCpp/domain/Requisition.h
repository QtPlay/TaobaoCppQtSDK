#ifndef REQUISITION_H
#define REQUISITION_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 合作申请
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class Requisition : public TaoDomain
{

public:
 virtual ~Requisition() { }

  qlonglong getDistAppraise() const;
  void setDistAppraise (qlonglong distAppraise);
  qlonglong getDistCategory() const;
  void setDistCategory (qlonglong distCategory);
  QString getDistCategoryName() const;
  void setDistCategoryName (QString distCategoryName);
  qlonglong getDistIsXiaobao() const;
  void setDistIsXiaobao (qlonglong distIsXiaobao);
  qlonglong getDistLevel() const;
  void setDistLevel (qlonglong distLevel);
  QString getDistMessage() const;
  void setDistMessage (QString distMessage);
  QDateTime getDistOpenDate() const;
  void setDistOpenDate (QDateTime distOpenDate);
  QString getDistShopAddress() const;
  void setDistShopAddress (QString distShopAddress);
  qlonglong getDistributorId() const;
  void setDistributorId (qlonglong distributorId);
  QString getDistributorNick() const;
  void setDistributorNick (QString distributorNick);
  QDateTime getGmtCreate() const;
  void setGmtCreate (QDateTime gmtCreate);
  qlonglong getRequisitionId() const;
  void setRequisitionId (qlonglong requisitionId);
  qlonglong getStatus() const;
  void setStatus (qlonglong status);
  
  virtual void parseResponse();

private:
/**
 * @brief 好评率
 **/
  qlonglong distAppraise;

/**
 * @brief 主营类目
 **/
  qlonglong distCategory;

/**
 * @brief 主营类目名称
 **/
  QString distCategoryName;

/**
 * @brief 是否消保(0-不是、1-是)
 **/
  qlonglong distIsXiaobao;

/**
 * @brief 店铺星级
 **/
  qlonglong distLevel;

/**
 * @brief 分销申请加盟时，给供应商的留言
 **/
  QString distMessage;

/**
 * @brief 开店时间
 **/
  QDateTime distOpenDate;

/**
 * @brief 店铺地址
 **/
  QString distShopAddress;

/**
 * @brief 分销商id
 **/
  qlonglong distributorId;

/**
 * @brief 分销商nick
 **/
  QString distributorNick;

/**
 * @brief 申请时间
 **/
  QDateTime gmtCreate;

/**
 * @brief 合作申请ID
 **/
  qlonglong requisitionId;

/**
 * @brief 申请状态（1-申请中、2-成功、3-被退回、4-已撤消、5-过期）
 **/
  qlonglong status;

};

#endif  /* REQUISITION_H */
