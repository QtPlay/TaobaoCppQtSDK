#ifndef ARTICLESUB_H
#define ARTICLESUB_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 应用订购信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ArticleSub : public TaoDomain
{

public:
 virtual ~ArticleSub() { }

  QString getArticleCode() const;
  void setArticleCode (QString articleCode);
  QString getArticleName() const;
  void setArticleName (QString articleName);
  bool getAutosub() const;
  void setAutosub (bool autosub);
  QDateTime getDeadline() const;
  void setDeadline (QDateTime deadline);
  bool getExpireNotice() const;
  void setExpireNotice (bool expireNotice);
  QString getItemCode() const;
  void setItemCode (QString itemCode);
  QString getItemName() const;
  void setItemName (QString itemName);
  QString getNick() const;
  void setNick (QString nick);
  qlonglong getStatus() const;
  void setStatus (qlonglong status);
  
  virtual void parseResponse();

private:
/**
 * @brief 应用收费代码，从合作伙伴后台（my.open.taobao.com）-收费管理-收费项目列表 能够获得该应用的收费代码
 **/
  QString articleCode;

/**
 * @brief 应用名称
 **/
  QString articleName;

/**
 * @brief 是否自动续费
 **/
  bool autosub;

/**
 * @brief 订购关系到期时间
 **/
  QDateTime deadline;

/**
 * @brief 是否到期提醒
 **/
  bool expireNotice;

/**
 * @brief 收费项目代码，从合作伙伴后台（my.open.taobao.com）-收费管理-收费项目列表 能够获得收费项目代码
 **/
  QString itemCode;

/**
 * @brief 收费项目名称
 **/
  QString itemName;

/**
 * @brief 淘宝会员名
 **/
  QString nick;

/**
 * @brief 状态，1=有效 2=过期
 **/
  qlonglong status;

};

#endif  /* ARTICLESUB_H */
