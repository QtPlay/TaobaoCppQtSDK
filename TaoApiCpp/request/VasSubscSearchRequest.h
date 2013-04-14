#ifndef VASSUBSCSEARCHREQUEST_H
#define VASSUBSCSEARCHREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/VasSubscSearchResponse.h>

/**
 * TOP API: 用于ISV查询自己名下的应用及收费项目的订购记录
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class VasSubscSearchRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getArticleCode() const
;  void setArticleCode (QString articleCode);

 bool getAutosub() const
;  void setAutosub (bool autosub);

 QDateTime getEndDeadline() const
;  void setEndDeadline (QDateTime endDeadline);

 bool getExpireNotice() const
;  void setExpireNotice (bool expireNotice);

 QString getItemCode() const
;  void setItemCode (QString itemCode);

 QString getNick() const
;  void setNick (QString nick);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QDateTime getStartDeadline() const
;  void setStartDeadline (QDateTime startDeadline);

 qlonglong getStatus() const
;  void setStatus (qlonglong status);


  virtual VasSubscSearchResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 应用收费代码，从合作伙伴后台（my.open.taobao.com）-收费管理-收费项目列表 能够获得该应用的收费代码
 **/
  QString articleCode;

/**
 * @brief 是否自动续费，true=自动续费 false=非自动续费 空=全部
 **/
  bool autosub;

/**
 * @brief 到期时间结束值
 **/
  QDateTime endDeadline;

/**
 * @brief 是否到期提醒，true=到期提醒 false=非到期提醒 空=全部
 **/
  bool expireNotice;

/**
 * @brief 收费项目代码，从合作伙伴后台（my.open.taobao.com）-收费管理-收费项目列表 能够获得收费项目代码
 **/
  QString itemCode;

/**
 * @brief 淘宝会员名
 **/
  QString nick;

/**
 * @brief 页码
 **/
  qlonglong pageNo;

/**
 * @brief 一页包含的记录数
 **/
  qlonglong pageSize;

/**
 * @brief 到期时间起始值（当start_deadline和end_deadline都不填写时，默认返回最近90天的数据）
 **/
  QDateTime startDeadline;

/**
 * @brief 订购记录状态，1=有效 2=过期 空=全部
 **/
  qlonglong status;

};

#endif  /* VASSUBSCSEARCHREQUEST_H */
