#ifndef REPLYSTATBYID_H
#define REPLYSTATBYID_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 客服回复统计
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ReplyStatById : public TaoDomain
{

public:
 virtual ~ReplyStatById() { }

  qlonglong getReplyNum() const;
  void setReplyNum (qlonglong replyNum);
  QString getUserId() const;
  void setUserId (QString userId);
  
  virtual void parseResponse();

private:
/**
 * @brief 客服回复数
 **/
  qlonglong replyNum;

/**
 * @brief 客服ID
 **/
  QString userId;

};

#endif  /* REPLYSTATBYID_H */
