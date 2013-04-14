#ifndef TRADERATELISTADDREQUEST_H
#define TRADERATELISTADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TraderateListAddResponse.h>

/**
 * TOP API: 针对父子订单新增批量评价(<font color="red">注：在评价之前需要对订单成功的时间进行判定（end_time）,如果超过15天，不用再通过该接口进行评价</font>)
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TraderateListAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 bool getAnony() const
;  void setAnony (bool anony);

 QString getContent() const
;  void setContent (QString content);

 QString getResult() const
;  void setResult (QString result);

 QString getRole() const
;  void setRole (QString role);

 qlonglong getTid() const
;  void setTid (qlonglong tid);


  virtual TraderateListAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 是否匿名，卖家评不能匿名。可选值:true(匿名),false(非匿名)。 注意：如果买家匿名购买，那么买家的评价默认匿名
 **/
  bool anony;

/**
 * @brief 评价内容,最大长度: 500个汉字 .注意：当评价结果为good时就不用输入评价内容.评价内容为neutral/bad的时候需要输入评价内容
 **/
  QString content;

/**
 * @brief 评价结果。可选值:good(好评),neutral(中评),bad(差评)
 **/
  QString result;

/**
 * @brief 评价者角色。可选值:seller(卖家),buyer(买家)
 **/
  QString role;

/**
 * @brief 交易ID
 **/
  qlonglong tid;

};

#endif  /* TRADERATELISTADDREQUEST_H */
