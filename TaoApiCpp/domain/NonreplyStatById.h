#ifndef NONREPLYSTATBYID_H
#define NONREPLYSTATBYID_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 客服未回复统计
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class NonreplyStatById : public TaoDomain
{

public:
 virtual ~NonreplyStatById() { }

  QString getNonReplyCustomId() const;
  void setNonReplyCustomId (QString nonReplyCustomId);
  qlonglong getNonReplyNum() const;
  void setNonReplyNum (qlonglong nonReplyNum);
  QString getServiceStaffId() const;
  void setServiceStaffId (QString serviceStaffId);
  
  virtual void parseResponse();

private:
/**
 * @brief 客服人员未回复的客户ID
 **/
  QString nonReplyCustomId;

/**
 * @brief 客服未回复数
 **/
  qlonglong nonReplyNum;

/**
 * @brief 客服人员ID
 **/
  QString serviceStaffId;

};

#endif  /* NONREPLYSTATBYID_H */
