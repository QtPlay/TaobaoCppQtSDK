#ifndef TRADERATE_H
#define TRADERATE_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 评价列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradeRate : public TaoDomain
{

public:
 virtual ~TradeRate() { }

  QString getContent() const;
  void setContent (QString content);
  QDateTime getCreated() const;
  void setCreated (QDateTime created);
  QString getItemPrice() const;
  void setItemPrice (QString itemPrice);
  QString getItemTitle() const;
  void setItemTitle (QString itemTitle);
  QString getNick() const;
  void setNick (QString nick);
  qlonglong getNumIid() const;
  void setNumIid (qlonglong numIid);
  qlonglong getOid() const;
  void setOid (qlonglong oid);
  QString getRatedNick() const;
  void setRatedNick (QString ratedNick);
  QString getReply() const;
  void setReply (QString reply);
  QString getResult() const;
  void setResult (QString result);
  QString getRole() const;
  void setRole (QString role);
  qlonglong getTid() const;
  void setTid (qlonglong tid);
  bool getValidScore() const;
  void setValidScore (bool validScore);
  
  virtual void parseResponse();

private:
/**
 * @brief 评价内容,最大长度:500个汉字
 **/
  QString content;

/**
 * @brief 评价创建时间,格式:yyyy-MM-dd HH:mm:ss
 **/
  QDateTime created;

/**
 * @brief 商品价格,精确到2位小数;单位:元.如:200.07，表示:200元7分
 **/
  QString itemPrice;

/**
 * @brief 商品标题
 **/
  QString itemTitle;

/**
 * @brief 评价者昵称
 **/
  QString nick;

/**
 * @brief 商品的数字ID
 **/
  qlonglong numIid;

/**
 * @brief 子订单ID
 **/
  qlonglong oid;

/**
 * @brief 被评价者昵称
 **/
  QString ratedNick;

/**
 * @brief 评价解释,最大长度:500个汉字
 **/
  QString reply;

/**
 * @brief 评价结果,可选值:good(好评),neutral(中评),bad(差评)
 **/
  QString result;

/**
 * @brief 评价者角色.可选值:seller(卖家),buyer(买家)
 **/
  QString role;

/**
 * @brief 交易ID
 **/
  qlonglong tid;

/**
 * @brief 评价信息是否用于记分， 
可取值：true(参与记分)和false(不参与记分)
 **/
  bool validScore;

};

#endif  /* TRADERATE_H */
