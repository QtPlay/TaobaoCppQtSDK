#ifndef REPLYSTATONDAY_H
#define REPLYSTATONDAY_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/ReplyStatById.h>


/**
 * @brief (某天)回复统计列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ReplyStatOnDay : public TaoDomain
{

public:
 virtual ~ReplyStatOnDay() { }

  QDateTime getReplyDate() const;
  void setReplyDate (QDateTime replyDate);
  QList<ReplyStatById> getReplyStatByIds() const;
  void setReplyStatByIds (QList<ReplyStatById> replyStatByIds);
  
  virtual void parseResponse();

private:
/**
 * @brief 某天（的回复统计）
 **/
  QDateTime replyDate;

/**
 * @brief 客服回复统计
 **/
  QList<ReplyStatById> replyStatByIds;

};

#endif  /* REPLYSTATONDAY_H */
