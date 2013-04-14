#ifndef NONREPLYSTATONDAY_H
#define NONREPLYSTATONDAY_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/NonreplyStatById.h>


/**
 * @brief 未回复统计列表(按天)
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class NonReplyStatOnDay : public TaoDomain
{

public:
 virtual ~NonReplyStatOnDay() { }

  QDateTime getNonreplyDate() const;
  void setNonreplyDate (QDateTime nonreplyDate);
  QList<NonreplyStatById> getNonreplyStatByIds() const;
  void setNonreplyStatByIds (QList<NonreplyStatById> nonreplyStatByIds);
  
  virtual void parseResponse();

private:
/**
 * @brief （某天的）未回复统计
 **/
  QDateTime nonreplyDate;

/**
 * @brief 未回复统计列表
 **/
  QList<NonreplyStatById> nonreplyStatByIds;

};

#endif  /* NONREPLYSTATONDAY_H */
