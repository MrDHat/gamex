

<!DOCTYPE html>
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
<head>
  <title>
  madaan / GAMEX / source &mdash; Bitbucket
</title>
  <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
  <meta name="description" content="" />
  <meta name="keywords" content="" />
  
    
  
  <!--[if lt IE 9]>
  <script src="https://dwz7u9t8u8usb.cloudfront.net/m/c3f9acf11710/js/old/html5.js"></script>
  <![endif]-->

  <script>
    (function (window) {
      // prevent stray occurrences of `console.log` from causing errors in IE
      var console = window.console || (window.console = {});
      console.log || (console.log = function () {});

      var BB = window.BB || (window.BB = {});
      BB.debug = false;
      BB.cname = false;
      BB.CANON_URL = 'https://bitbucket.org';
      BB.STATIC_URL = 'https://dwz7u9t8u8usb.cloudfront.net/m/c3f9acf11710/';
      BB.images = {
        invitation: 'https://dwz7u9t8u8usb.cloudfront.net/m/c3f9acf11710/img/icons/fugue/card_address.png',
        noAvatar: 'https://dwz7u9t8u8usb.cloudfront.net/m/c3f9acf11710/img/no_avatar.png'
      };
      BB.user = {"username": "madaan", "displayName": "Aman Madaan", "firstName": "Aman", "avatarUrl": "https://secure.gravatar.com/avatar/e7e54ed8d87e07cf8b12ecf9c7b38426?d=identicon\u0026s=32", "lastName": "Madaan", "isTeam": false, "isSshEnabled": false, "isKbdShortcutsEnabled": true, "id": 517802, "isAuthenticated": true};
      BB.targetUser = BB.user;
    
      BB.repo || (BB.repo = {});
  
      BB.repo.id = 1408994;
    
    
      BB.repo.language = 'c++';
      BB.repo.pygmentsLanguage = 'c++';
    
    
      BB.repo.slug = 'gamex';
    
    
      BB.repo.owner = {};
      BB.repo.owner.username = 'madaan';
    
    
      // Coerce `BB.repo` to a string to get
      // "davidchambers/mango" or whatever.
      BB.repo.toString = function () {
        return BB.cname ? this.slug : '{owner.username}/{slug}'.format(this);
      }
    
      BB.changeset = '3987e0ee63763ecfc858716455a42e67eea60457'
    
    
  
    }(this));
  </script>

  
<link rel="stylesheet" href="https://dwz7u9t8u8usb.cloudfront.net/m/c3f9acf11710/compressed/css/d99f5e899391.css" type="text/css" />

<link rel="stylesheet" href="https://dwz7u9t8u8usb.cloudfront.net/m/c3f9acf11710/compressed/css/e0640258d3ee.css" type="text/css" />


  <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="Bitbucket" />
  <link rel="icon" href="https://dwz7u9t8u8usb.cloudfront.net/m/c3f9acf11710/img/logo_new.png" type="image/png" />
  <link type="text/plain" rel="author" href="/humans.txt" />


  
  
<script type="text/javascript" src="https://dwz7u9t8u8usb.cloudfront.net/m/c3f9acf11710/compressed/js/e76e77b209d3.js"></script>




</head>

<body id="" class=" ">
  <script>
    if (navigator.userAgent.indexOf(' AppleWebKit/') === -1) {
      $('body').addClass('non-webkit')
    }
    $('body')
      .addClass($.client.os.toLowerCase())
      .addClass($.client.browser.toLowerCase())
  </script>
  <!--[if IE 8]>
  <script>jQuery(document.body).addClass('ie8')</script>
  <![endif]-->
  <!--[if IE 9]>
  <script>jQuery(document.body).addClass('ie9')</script>
  <![endif]-->

  <div id="wrapper">



  <div id="header-wrap">
    <div id="header">
    <ul id="global-nav">
      <li><a class="home" href="http://www.atlassian.com">Atlassian Home</a></li>
      <li><a class="docs" href="http://confluence.atlassian.com/display/BITBUCKET">Documentation</a></li>
      <li><a class="support" href="/support">Support</a></li>
      <li><a class="blog" href="http://blog.bitbucket.org">Blog</a></li>
      <li><a class="forums" href="http://groups.google.com/group/bitbucket-users">Forums</a></li>
    </ul>
    <a href="/" id="logo">Bitbucket by Atlassian</a>

    <div id="main-nav">
    

      <ul class="clearfix">
        <li><a href="/explore" id="explore-link">Explore</a></li>
        <li><a href="https://bitbucket.org" id="dashboard-link">Dashboard</a></li>
        <li id="repositories-dropdown" class="inertial-hover active">
          <a class="drop-arrow" href="/repo/mine" id="repositories-link">Repositories</a>
          <div>
            <div>
              <div id="repo-overview"></div>
              <div class="group">
                <a href="/repo/create" class="new-repository" id="create-repo-link">Create repository</a>
                <a href="/repo/import" class="import-repository" id="import-repo-link">Import repository</a>
              </div>
            </div>
          </div>
        </li>
        <li id="user-dropdown" class="inertial-hover">
          <a class="drop-arrow" href="/madaan">
            <span>Aman Madaan</span>
          </a>
          <div>
            <div>
              <div class="group">
                <a href="/account/user/madaan/" id="account-link">Account</a>
                <a href="/account/notifications/" id="inbox-link">Inbox <span id="inbox-unread-count"></span></a>
                <a href="/account/signout/">Log out</a>
              </div>

          <div class="group" id="account-admin-links">
            <h3>Teams</h3>
          </div>
    <div class="group">
      <a href="#general-invite" class='general-invite-link'>Invite a friend</a>
    </div>
    
        <div class="group">
          <a href="/account/create-team/" id="create-team">Create team</a>
          <a href="/account/user/madaan/convert-team/" id="convert-team">Convert to team</a>
        </div>
    

            </div>
          </div>
        </li>
        

<li class="search-box">
  <form action="/repo/all">
    <input type="search" results="5" autosave="bitbucket-explore-search"
           name="name" id="searchbox"
           placeholder="owner/repo" />
  </form>
</li>

      </ul>

    
    </div>

  

    </div>
  </div>

    <div id="header-messages">
  
    
    
  

    
   </div>



    <div id="content">
      <div id="source">
      
  
  





  <script>
    jQuery(function ($) {
        var cookie = $.cookie,
            cookieOptions, date,
            $content = $('#content'),
            $pane = $('#what-is-bitbucket'),
            $hide = $pane.find('[href="#hide"]').css('display', 'block').hide();

        date = new Date();
        date.setTime(date.getTime() + 365 * 24 * 60 * 60 * 1000);
        cookieOptions = { path: '/', expires: date };

        if (cookie('toggle_status') == 'hide') $content.addClass('repo-desc-hidden');

        $('#toggle-repo-content').click(function (event) {
            event.preventDefault();
            $content.toggleClass('repo-desc-hidden');
            cookie('toggle_status', cookie('toggle_status') == 'show' ? 'hide' : 'show', cookieOptions);
        });

        if (!cookie('hide_intro_message')) $pane.show();

        $hide.click(function (event) {
            event.preventDefault();
            cookie('hide_intro_message', true, cookieOptions);
            $pane.slideUp('slow');
        });

        $pane.hover(
            function () { $hide.fadeIn('fast'); },
            function () { $hide.fadeOut('fast'); });

      (function () {
        // Update "recently-viewed-repos" cookie for
        // the "repositories" drop-down.
        var
          id = BB.repo.id,
          cookieName = 'recently-viewed-repos_' + BB.user.id,
          rvr = cookie(cookieName),
          ids = rvr? rvr.split(','): [],
          idx = _.indexOf(ids, '' + id);

        // Remove `id` from `ids` if present.
        if (~idx) ids.splice(idx, 1);

        cookie(
          cookieName,
          // Insert `id` as the first item, then call
          // `join` on the resulting array to produce
          // something like "114694,27542,89002,84570".
          [id].concat(ids.slice(0, 4)).join(),
          {path: '/', expires: 1e6} // "never" expires
        );
      }());
    });
  </script>




<div id="tabs" class="tabs">
  <ul>
    
      <li>
        <a href="/madaan/gamex/overview" id="repo-overview-link">Overview</a>
      </li>
    

    
      <li>
        <a href="/madaan/gamex/downloads" id="repo-downloads-link">Downloads (<span id="downloads-count">0</span>)</a>
      </li>
    

    
      
    

    
      <li>
        <a href="/madaan/gamex/pull-requests" id="repo-pr-link">Pull requests (0)</a>
      </li>
    

    
      <li class="selected">
        
          <a href="/madaan/gamex/src" id="repo-source-link">Source</a>
        
      </li>
    

    
      <li>
        <a href="/madaan/gamex/changesets" id="repo-commits-link">Commits</a>
      </li>
    

    <li id="wiki-tab" class="dropdown"
      style="display:
                        none  
        
      ">
      <a href="/madaan/gamex/wiki" id="repo-wiki-link">Wiki</a>
    </li>

    <li id="issues-tab" class="dropdown inertial-hover"
      style="display:
                      none  
        
      ">
      <a href="/madaan/gamex/issues?status=new&amp;status=open" id="repo-issues-link">Issues (0) &raquo;</a>
      <ul>
        <li><a href="/madaan/gamex/issues/new">Create issue</a></li>
        <li><a href="/madaan/gamex/issues?status=new">New issues</a></li>
        <li><a href="/madaan/gamex/issues?status=new&amp;status=open">Open issues</a></li>
        <li><a href="/madaan/gamex/issues?status=duplicate&amp;status=invalid&amp;status=resolved&amp;status=wontfix">Closed issues</a></li>
        
          <li><a href="/madaan/gamex/issues?responsible=madaan">My issues</a></li>
        
        <li><a href="/madaan/gamex/issues">All issues</a></li>
        <li><a href="/madaan/gamex/issues/query">Advanced query</a></li>
      </ul>
    </li>

    
        <li>
          <a href="/madaan/gamex/admin" id="repo-admin-link">Admin</a>
        </li>
    
  </ul>

  <ul>
    
      <li>
        <a href="/madaan/gamex/descendants" id="repo-forks-link">Forks/queues (0)</a>
      </li>
    

    
      <li>
        <a href="/madaan/gamex/zealots">Followers (<span id="followers-count">1</span>)</a>
      </li>
    
  </ul>
</div>


  <div id="invitation-dialog" class="invitation-dialog" title="Send an invitation">

<form class="invitation-form newform"
  method="post"
  action="/api/1.0/invitations/madaan/gamex"
  novalidate>
  <div style='display:none'><input type='hidden' name='csrfmiddlewaretoken' value='121c06ee81c72f5ff0630f7de7c524de' /></div>
  <div class="error_ message_"><h4></h4></div>
  <div class="success_ message_"><h4></h4></div>
  <label for="id-email-address">Email address</label>
  <input type="email" id="id-email-address" name="email-address">
  <select name="permission" class="nosearch">
  
    <option value="read">Read access</option>
  
    <option value="write">Write access</option>
    <option value="admin">Admin access</option>
  </select>
  <input type="submit" value="Send invitation" />
</form>
</div>
 


  <div class="repo-menu" id="repo-menu">
    <ul id="repo-menu-links">
    
    
      <li>
        <a id="repo-invite-link" href="#share" class="share">invite</a>
      </li>
    
      <li>
        <a href="/madaan/gamex/rss?token=1b53fea80b664aa77b7529f32a85ec7c" class="rss" title="RSS feed for GAMEX">RSS</a>
      </li>

      <li><a id="repo-fork-link" href="/madaan/gamex/fork" class="fork">fork</a></li>
      
      <li>
        <a id="repo-follow-link" rel="nofollow" href="/madaan/gamex/follow" class="follow following">following</a>
      </li>
      
          
      
      
        <li class="get-source inertial-hover">
          <a class="source">get source</a>
          <ul class="downloads">
            
              
              <li><a rel="nofollow" href="/madaan/gamex/get/3987e0ee6376.zip">zip</a></li>
              <li><a rel="nofollow" href="/madaan/gamex/get/3987e0ee6376.tar.gz">gz</a></li>
              <li><a rel="nofollow" href="/madaan/gamex/get/3987e0ee6376.tar.bz2">bz2</a></li>
            
          </ul>
        </li>
      
      
    </ul>

  
    <ul class="metadata">
      
      
      
        <li class="branches inertial-hover">branches
          <ul>
            <li class="filter">
              <input type="text" class="dropdown-filter" placeholder="Filter branches" autosave="branch-dropdown-1408994"/>
            </li>
            
            <li class="comprev"><a href="/madaan/gamex/src/3987e0ee6376" title="master">master</a>
              
            </li>
          </ul>
        </li>
      
      
     
      
    </ul>
  
  </div>




<div class="repo-menu" id="repo-desc">
    <ul id="repo-menu-links-mini">
      <li><a rel="nofollow" class="compare-link"
             href="/madaan/gamex/compare"
             title="Show changes between GAMEX and "
             ></a></li>
      
      <li>
        <a href="/madaan/gamex/pull-request/new" class="pull-request" title="Pull request"></a>
      </li>
      

      
        <li>
          <a href="#share" class="share" title="Invite">invite</a>
        </li>
      
      <li>
        <a href="/madaan/gamex/rss?token=1b53fea80b664aa77b7529f32a85ec7c" class="rss" title="RSS feed for GAMEX"></a>
      </li>

      <li><a href="/madaan/gamex/fork" class="fork" title="Fork"></a></li>
      
      <li>
        <a rel="nofollow" href="/madaan/gamex/follow" class="follow following">following</a>
      </li>
      
          
      
      
        <li>
          <a class="source" title="Get source"></a>
          <ul class="downloads">
            
              
              <li><a rel="nofollow" href="/madaan/gamex/get/3987e0ee6376.zip">zip</a></li>
              <li><a rel="nofollow" href="/madaan/gamex/get/3987e0ee6376.tar.gz">gz</a></li>
              <li><a rel="nofollow" href="/madaan/gamex/get/3987e0ee6376.tar.bz2">bz2</a></li>
            
          </ul>
        </li>
      
    </ul>

    <h3 id="repo-heading" class="private git">
      <a class="owner-username" href="/madaan">madaan</a> /
      <a class="repo-name" href="/madaan/gamex">GAMEX</a>
    

    <ul id="fork-actions" class="button-group">
      <li>
        <a id="repo-compare-link"
           href="/madaan/gamex/compare"
           rel="nofollow" class="icon compare-link">compare</a>
      </li>
    
      <li>
        <a id="repo-create-pr-link" href="/madaan/gamex/pull-request/new"
           class="icon pull-request">create pull request</a>
      </li>
    
    </ul>
    </h3>

    
      <p class="repo-desc-description">Game for the fest to be organized by department of CSE , BVCOE.
</p>
    

  <div id="repo-desc-cloneinfo">Clone this repository (size: 156.7 KB):
    <a href="https://madaan@bitbucket.org/madaan/gamex.git" class="https">HTTPS</a> /
    <a href="ssh://git@bitbucket.org/madaan/gamex.git" class="ssh">SSH</a>
    <div id="sourcetree-clone-link" class="clone-in-client mac  help-activated"
         data-desktop-clone-url-ssh="ssh://git@bitbucket.org/madaan/gamex.git"
         data-desktop-clone-url-https="https://madaan@bitbucket.org/madaan/gamex.git">
        /
      <a class="desktop-ssh"
         href="sourcetree://cloneRepo/ssh://git@bitbucket.org/madaan/gamex.git">SourceTree</a>
      <a class="desktop-https"
         href="sourcetree://cloneRepo/https://madaan@bitbucket.org/madaan/gamex.git">SourceTree</a>
    </div>
    
    <pre id="clone-url-https">git clone https://madaan@bitbucket.org/madaan/gamex.git</pre>
    <pre id="clone-url-ssh">git clone git@bitbucket.org:madaan/gamex.git</pre>
    
  </div>

        <a href="#" id="toggle-repo-content"></a>

        

        
          
        

</div>




      
  <div id="source-container">
    

  <div id="source-path">
    <h1>
      <a href="/madaan/gamex/src" class="src-pjax">GAMEX</a> /

  
    
      <span>BitOps.cpp</span>
    
  

    </h1>
  </div>

  <div class="labels labels-csv">
  
    <dl>
  
  
  
    <dt>Branch</dt>
    
      
        <dd class="branch unabridged"><a href="/madaan/gamex/changesets/tip/master" title="master">master</a></dd>
      
    
  
</dl>

  
  </div>


  
  <div id="source-view">
    <div class="header">
      <ul class="metadata">
        <li><code>3987e0ee6376</code></li>
        
          
            <li>440 loc</li>
          
        
        <li>8.9 KB</li>
      </ul>
      <ul class="source-view-links">
        
        <li><a href="/madaan/gamex/history/BitOps.cpp">history</a></li>
        
        <li><a href="/madaan/gamex/annotate/3987e0ee6376/BitOps.cpp">annotate</a></li>
        
        <li><a href="/madaan/gamex/raw/3987e0ee6376/BitOps.cpp">raw</a></li>
        <li>
          <form action="/madaan/gamex/diff/BitOps.cpp" class="source-view-form">
          
            <input type="hidden" name="diff2" value="3987e0ee6376" />
            <select name="diff1">
            
              
            
              
                <option value="8ec7761e9610">8ec7761e9610</option>
              
            
              
                <option value="24678b44597f">24678b44597f</option>
              
            
              
                <option value="26bec3745a72">26bec3745a72</option>
              
            
              
                <option value="016afef55817">016afef55817</option>
              
            
              
                <option value="42054f6701c4">42054f6701c4</option>
              
            
              
                <option value="e64b5c8f9aff">e64b5c8f9aff</option>
              
            
              
                <option value="13f8235377b5">13f8235377b5</option>
              
            
              
                <option value="bff1fbdcbedf">bff1fbdcbedf</option>
              
            
            </select>
            <input type="submit" value="diff" />
          
          </form>
        </li>
        
      </ul>
    </div>
  
    
      
        <div>
          <table class="highlighttable"><tr><td class="linenos"><div class="linenodiv"><pre><a href="#cl-1">  1</a>
<a href="#cl-2">  2</a>
<a href="#cl-3">  3</a>
<a href="#cl-4">  4</a>
<a href="#cl-5">  5</a>
<a href="#cl-6">  6</a>
<a href="#cl-7">  7</a>
<a href="#cl-8">  8</a>
<a href="#cl-9">  9</a>
<a href="#cl-10"> 10</a>
<a href="#cl-11"> 11</a>
<a href="#cl-12"> 12</a>
<a href="#cl-13"> 13</a>
<a href="#cl-14"> 14</a>
<a href="#cl-15"> 15</a>
<a href="#cl-16"> 16</a>
<a href="#cl-17"> 17</a>
<a href="#cl-18"> 18</a>
<a href="#cl-19"> 19</a>
<a href="#cl-20"> 20</a>
<a href="#cl-21"> 21</a>
<a href="#cl-22"> 22</a>
<a href="#cl-23"> 23</a>
<a href="#cl-24"> 24</a>
<a href="#cl-25"> 25</a>
<a href="#cl-26"> 26</a>
<a href="#cl-27"> 27</a>
<a href="#cl-28"> 28</a>
<a href="#cl-29"> 29</a>
<a href="#cl-30"> 30</a>
<a href="#cl-31"> 31</a>
<a href="#cl-32"> 32</a>
<a href="#cl-33"> 33</a>
<a href="#cl-34"> 34</a>
<a href="#cl-35"> 35</a>
<a href="#cl-36"> 36</a>
<a href="#cl-37"> 37</a>
<a href="#cl-38"> 38</a>
<a href="#cl-39"> 39</a>
<a href="#cl-40"> 40</a>
<a href="#cl-41"> 41</a>
<a href="#cl-42"> 42</a>
<a href="#cl-43"> 43</a>
<a href="#cl-44"> 44</a>
<a href="#cl-45"> 45</a>
<a href="#cl-46"> 46</a>
<a href="#cl-47"> 47</a>
<a href="#cl-48"> 48</a>
<a href="#cl-49"> 49</a>
<a href="#cl-50"> 50</a>
<a href="#cl-51"> 51</a>
<a href="#cl-52"> 52</a>
<a href="#cl-53"> 53</a>
<a href="#cl-54"> 54</a>
<a href="#cl-55"> 55</a>
<a href="#cl-56"> 56</a>
<a href="#cl-57"> 57</a>
<a href="#cl-58"> 58</a>
<a href="#cl-59"> 59</a>
<a href="#cl-60"> 60</a>
<a href="#cl-61"> 61</a>
<a href="#cl-62"> 62</a>
<a href="#cl-63"> 63</a>
<a href="#cl-64"> 64</a>
<a href="#cl-65"> 65</a>
<a href="#cl-66"> 66</a>
<a href="#cl-67"> 67</a>
<a href="#cl-68"> 68</a>
<a href="#cl-69"> 69</a>
<a href="#cl-70"> 70</a>
<a href="#cl-71"> 71</a>
<a href="#cl-72"> 72</a>
<a href="#cl-73"> 73</a>
<a href="#cl-74"> 74</a>
<a href="#cl-75"> 75</a>
<a href="#cl-76"> 76</a>
<a href="#cl-77"> 77</a>
<a href="#cl-78"> 78</a>
<a href="#cl-79"> 79</a>
<a href="#cl-80"> 80</a>
<a href="#cl-81"> 81</a>
<a href="#cl-82"> 82</a>
<a href="#cl-83"> 83</a>
<a href="#cl-84"> 84</a>
<a href="#cl-85"> 85</a>
<a href="#cl-86"> 86</a>
<a href="#cl-87"> 87</a>
<a href="#cl-88"> 88</a>
<a href="#cl-89"> 89</a>
<a href="#cl-90"> 90</a>
<a href="#cl-91"> 91</a>
<a href="#cl-92"> 92</a>
<a href="#cl-93"> 93</a>
<a href="#cl-94"> 94</a>
<a href="#cl-95"> 95</a>
<a href="#cl-96"> 96</a>
<a href="#cl-97"> 97</a>
<a href="#cl-98"> 98</a>
<a href="#cl-99"> 99</a>
<a href="#cl-100">100</a>
<a href="#cl-101">101</a>
<a href="#cl-102">102</a>
<a href="#cl-103">103</a>
<a href="#cl-104">104</a>
<a href="#cl-105">105</a>
<a href="#cl-106">106</a>
<a href="#cl-107">107</a>
<a href="#cl-108">108</a>
<a href="#cl-109">109</a>
<a href="#cl-110">110</a>
<a href="#cl-111">111</a>
<a href="#cl-112">112</a>
<a href="#cl-113">113</a>
<a href="#cl-114">114</a>
<a href="#cl-115">115</a>
<a href="#cl-116">116</a>
<a href="#cl-117">117</a>
<a href="#cl-118">118</a>
<a href="#cl-119">119</a>
<a href="#cl-120">120</a>
<a href="#cl-121">121</a>
<a href="#cl-122">122</a>
<a href="#cl-123">123</a>
<a href="#cl-124">124</a>
<a href="#cl-125">125</a>
<a href="#cl-126">126</a>
<a href="#cl-127">127</a>
<a href="#cl-128">128</a>
<a href="#cl-129">129</a>
<a href="#cl-130">130</a>
<a href="#cl-131">131</a>
<a href="#cl-132">132</a>
<a href="#cl-133">133</a>
<a href="#cl-134">134</a>
<a href="#cl-135">135</a>
<a href="#cl-136">136</a>
<a href="#cl-137">137</a>
<a href="#cl-138">138</a>
<a href="#cl-139">139</a>
<a href="#cl-140">140</a>
<a href="#cl-141">141</a>
<a href="#cl-142">142</a>
<a href="#cl-143">143</a>
<a href="#cl-144">144</a>
<a href="#cl-145">145</a>
<a href="#cl-146">146</a>
<a href="#cl-147">147</a>
<a href="#cl-148">148</a>
<a href="#cl-149">149</a>
<a href="#cl-150">150</a>
<a href="#cl-151">151</a>
<a href="#cl-152">152</a>
<a href="#cl-153">153</a>
<a href="#cl-154">154</a>
<a href="#cl-155">155</a>
<a href="#cl-156">156</a>
<a href="#cl-157">157</a>
<a href="#cl-158">158</a>
<a href="#cl-159">159</a>
<a href="#cl-160">160</a>
<a href="#cl-161">161</a>
<a href="#cl-162">162</a>
<a href="#cl-163">163</a>
<a href="#cl-164">164</a>
<a href="#cl-165">165</a>
<a href="#cl-166">166</a>
<a href="#cl-167">167</a>
<a href="#cl-168">168</a>
<a href="#cl-169">169</a>
<a href="#cl-170">170</a>
<a href="#cl-171">171</a>
<a href="#cl-172">172</a>
<a href="#cl-173">173</a>
<a href="#cl-174">174</a>
<a href="#cl-175">175</a>
<a href="#cl-176">176</a>
<a href="#cl-177">177</a>
<a href="#cl-178">178</a>
<a href="#cl-179">179</a>
<a href="#cl-180">180</a>
<a href="#cl-181">181</a>
<a href="#cl-182">182</a>
<a href="#cl-183">183</a>
<a href="#cl-184">184</a>
<a href="#cl-185">185</a>
<a href="#cl-186">186</a>
<a href="#cl-187">187</a>
<a href="#cl-188">188</a>
<a href="#cl-189">189</a>
<a href="#cl-190">190</a>
<a href="#cl-191">191</a>
<a href="#cl-192">192</a>
<a href="#cl-193">193</a>
<a href="#cl-194">194</a>
<a href="#cl-195">195</a>
<a href="#cl-196">196</a>
<a href="#cl-197">197</a>
<a href="#cl-198">198</a>
<a href="#cl-199">199</a>
<a href="#cl-200">200</a>
<a href="#cl-201">201</a>
<a href="#cl-202">202</a>
<a href="#cl-203">203</a>
<a href="#cl-204">204</a>
<a href="#cl-205">205</a>
<a href="#cl-206">206</a>
<a href="#cl-207">207</a>
<a href="#cl-208">208</a>
<a href="#cl-209">209</a>
<a href="#cl-210">210</a>
<a href="#cl-211">211</a>
<a href="#cl-212">212</a>
<a href="#cl-213">213</a>
<a href="#cl-214">214</a>
<a href="#cl-215">215</a>
<a href="#cl-216">216</a>
<a href="#cl-217">217</a>
<a href="#cl-218">218</a>
<a href="#cl-219">219</a>
<a href="#cl-220">220</a>
<a href="#cl-221">221</a>
<a href="#cl-222">222</a>
<a href="#cl-223">223</a>
<a href="#cl-224">224</a>
<a href="#cl-225">225</a>
<a href="#cl-226">226</a>
<a href="#cl-227">227</a>
<a href="#cl-228">228</a>
<a href="#cl-229">229</a>
<a href="#cl-230">230</a>
<a href="#cl-231">231</a>
<a href="#cl-232">232</a>
<a href="#cl-233">233</a>
<a href="#cl-234">234</a>
<a href="#cl-235">235</a>
<a href="#cl-236">236</a>
<a href="#cl-237">237</a>
<a href="#cl-238">238</a>
<a href="#cl-239">239</a>
<a href="#cl-240">240</a>
<a href="#cl-241">241</a>
<a href="#cl-242">242</a>
<a href="#cl-243">243</a>
<a href="#cl-244">244</a>
<a href="#cl-245">245</a>
<a href="#cl-246">246</a>
<a href="#cl-247">247</a>
<a href="#cl-248">248</a>
<a href="#cl-249">249</a>
<a href="#cl-250">250</a>
<a href="#cl-251">251</a>
<a href="#cl-252">252</a>
<a href="#cl-253">253</a>
<a href="#cl-254">254</a>
<a href="#cl-255">255</a>
<a href="#cl-256">256</a>
<a href="#cl-257">257</a>
<a href="#cl-258">258</a>
<a href="#cl-259">259</a>
<a href="#cl-260">260</a>
<a href="#cl-261">261</a>
<a href="#cl-262">262</a>
<a href="#cl-263">263</a>
<a href="#cl-264">264</a>
<a href="#cl-265">265</a>
<a href="#cl-266">266</a>
<a href="#cl-267">267</a>
<a href="#cl-268">268</a>
<a href="#cl-269">269</a>
<a href="#cl-270">270</a>
<a href="#cl-271">271</a>
<a href="#cl-272">272</a>
<a href="#cl-273">273</a>
<a href="#cl-274">274</a>
<a href="#cl-275">275</a>
<a href="#cl-276">276</a>
<a href="#cl-277">277</a>
<a href="#cl-278">278</a>
<a href="#cl-279">279</a>
<a href="#cl-280">280</a>
<a href="#cl-281">281</a>
<a href="#cl-282">282</a>
<a href="#cl-283">283</a>
<a href="#cl-284">284</a>
<a href="#cl-285">285</a>
<a href="#cl-286">286</a>
<a href="#cl-287">287</a>
<a href="#cl-288">288</a>
<a href="#cl-289">289</a>
<a href="#cl-290">290</a>
<a href="#cl-291">291</a>
<a href="#cl-292">292</a>
<a href="#cl-293">293</a>
<a href="#cl-294">294</a>
<a href="#cl-295">295</a>
<a href="#cl-296">296</a>
<a href="#cl-297">297</a>
<a href="#cl-298">298</a>
<a href="#cl-299">299</a>
<a href="#cl-300">300</a>
<a href="#cl-301">301</a>
<a href="#cl-302">302</a>
<a href="#cl-303">303</a>
<a href="#cl-304">304</a>
<a href="#cl-305">305</a>
<a href="#cl-306">306</a>
<a href="#cl-307">307</a>
<a href="#cl-308">308</a>
<a href="#cl-309">309</a>
<a href="#cl-310">310</a>
<a href="#cl-311">311</a>
<a href="#cl-312">312</a>
<a href="#cl-313">313</a>
<a href="#cl-314">314</a>
<a href="#cl-315">315</a>
<a href="#cl-316">316</a>
<a href="#cl-317">317</a>
<a href="#cl-318">318</a>
<a href="#cl-319">319</a>
<a href="#cl-320">320</a>
<a href="#cl-321">321</a>
<a href="#cl-322">322</a>
<a href="#cl-323">323</a>
<a href="#cl-324">324</a>
<a href="#cl-325">325</a>
<a href="#cl-326">326</a>
<a href="#cl-327">327</a>
<a href="#cl-328">328</a>
<a href="#cl-329">329</a>
<a href="#cl-330">330</a>
<a href="#cl-331">331</a>
<a href="#cl-332">332</a>
<a href="#cl-333">333</a>
<a href="#cl-334">334</a>
<a href="#cl-335">335</a>
<a href="#cl-336">336</a>
<a href="#cl-337">337</a>
<a href="#cl-338">338</a>
<a href="#cl-339">339</a>
<a href="#cl-340">340</a>
<a href="#cl-341">341</a>
<a href="#cl-342">342</a>
<a href="#cl-343">343</a>
<a href="#cl-344">344</a>
<a href="#cl-345">345</a>
<a href="#cl-346">346</a>
<a href="#cl-347">347</a>
<a href="#cl-348">348</a>
<a href="#cl-349">349</a>
<a href="#cl-350">350</a>
<a href="#cl-351">351</a>
<a href="#cl-352">352</a>
<a href="#cl-353">353</a>
<a href="#cl-354">354</a>
<a href="#cl-355">355</a>
<a href="#cl-356">356</a>
<a href="#cl-357">357</a>
<a href="#cl-358">358</a>
<a href="#cl-359">359</a>
<a href="#cl-360">360</a>
<a href="#cl-361">361</a>
<a href="#cl-362">362</a>
<a href="#cl-363">363</a>
<a href="#cl-364">364</a>
<a href="#cl-365">365</a>
<a href="#cl-366">366</a>
<a href="#cl-367">367</a>
<a href="#cl-368">368</a>
<a href="#cl-369">369</a>
<a href="#cl-370">370</a>
<a href="#cl-371">371</a>
<a href="#cl-372">372</a>
<a href="#cl-373">373</a>
<a href="#cl-374">374</a>
<a href="#cl-375">375</a>
<a href="#cl-376">376</a>
<a href="#cl-377">377</a>
<a href="#cl-378">378</a>
<a href="#cl-379">379</a>
<a href="#cl-380">380</a>
<a href="#cl-381">381</a>
<a href="#cl-382">382</a>
<a href="#cl-383">383</a>
<a href="#cl-384">384</a>
<a href="#cl-385">385</a>
<a href="#cl-386">386</a>
<a href="#cl-387">387</a>
<a href="#cl-388">388</a>
<a href="#cl-389">389</a>
<a href="#cl-390">390</a>
<a href="#cl-391">391</a>
<a href="#cl-392">392</a>
<a href="#cl-393">393</a>
<a href="#cl-394">394</a>
<a href="#cl-395">395</a>
<a href="#cl-396">396</a>
<a href="#cl-397">397</a>
<a href="#cl-398">398</a>
<a href="#cl-399">399</a>
<a href="#cl-400">400</a>
<a href="#cl-401">401</a>
<a href="#cl-402">402</a>
<a href="#cl-403">403</a>
<a href="#cl-404">404</a>
<a href="#cl-405">405</a>
<a href="#cl-406">406</a>
<a href="#cl-407">407</a>
<a href="#cl-408">408</a>
<a href="#cl-409">409</a>
<a href="#cl-410">410</a>
<a href="#cl-411">411</a>
<a href="#cl-412">412</a>
<a href="#cl-413">413</a>
<a href="#cl-414">414</a>
<a href="#cl-415">415</a>
<a href="#cl-416">416</a>
<a href="#cl-417">417</a>
<a href="#cl-418">418</a>
<a href="#cl-419">419</a>
<a href="#cl-420">420</a>
<a href="#cl-421">421</a>
<a href="#cl-422">422</a>
<a href="#cl-423">423</a>
<a href="#cl-424">424</a>
<a href="#cl-425">425</a>
<a href="#cl-426">426</a>
<a href="#cl-427">427</a>
<a href="#cl-428">428</a>
<a href="#cl-429">429</a>
<a href="#cl-430">430</a>
<a href="#cl-431">431</a>
<a href="#cl-432">432</a>
<a href="#cl-433">433</a>
<a href="#cl-434">434</a>
<a href="#cl-435">435</a>
<a href="#cl-436">436</a>
<a href="#cl-437">437</a>
<a href="#cl-438">438</a>
<a href="#cl-439">439</a>
<a href="#cl-440">440</a></pre></div></td><td class="code"><div class="highlight"><pre><a name="cl-1"></a><span class="c1">//sg</span>
<a name="cl-2"></a><span class="cp">#include&lt;iostream&gt;</span>
<a name="cl-3"></a><span class="cp">#include&lt;ncurses.h&gt;</span>
<a name="cl-4"></a><span class="cp">#include&lt;cstring&gt;</span>
<a name="cl-5"></a><span class="cp">#include&lt;cctype&gt;</span>
<a name="cl-6"></a><span class="cp">#include&lt;cstdlib&gt;</span>
<a name="cl-7"></a><span class="cp">#include&lt;string&gt;</span>
<a name="cl-8"></a>
<a name="cl-9"></a><span class="k">using</span> <span class="k">namespace</span> <span class="n">std</span> <span class="p">;</span>
<a name="cl-10"></a><span class="k">class</span> <span class="nc">BitOps</span>
<a name="cl-11"></a><span class="p">{</span>
<a name="cl-12"></a><span class="cm">/*this class should enclose the </span>
<a name="cl-13"></a><span class="cm"> * parser and the functions </span>
<a name="cl-14"></a><span class="cm"> * 1. And ,or ,not ,xor,</span>
<a name="cl-15"></a><span class="cm"> * 2. ones (x) : returns number of 1&#39;s in binary representation of x</span>
<a name="cl-16"></a><span class="cm"> *  similar to ones, define functions like : </span>
<a name="cl-17"></a><span class="cm"> * zeros(x)</span>
<a name="cl-18"></a><span class="cm"> * 3. firstOne(x) : returns location of first one log2(x&amp;(-x))</span>
<a name="cl-19"></a><span class="cm"> * 4. nearPower(x) : nearest power of x</span>
<a name="cl-20"></a><span class="cm"> * </span>
<a name="cl-21"></a><span class="cm"> * Just implement these functions and after that, </span>
<a name="cl-22"></a><span class="cm"> * you need to provide the following functionality : </span>
<a name="cl-23"></a><span class="cm"> * 1. You need to parse what user has entered. </span>
<a name="cl-24"></a><span class="cm"> * 2. if user types &quot;help&quot; just dump all the commands available</span>
<a name="cl-25"></a><span class="cm"> * 3. if user types exit, go to main screen ( for now ,exit the program)</span>
<a name="cl-26"></a><span class="cm"> * 4. if user types a valid command , print result in the next line. </span>
<a name="cl-27"></a><span class="cm"> * eg : </span>
<a name="cl-28"></a><span class="cm"> *              $help</span>
<a name="cl-29"></a><span class="cm"> *              $ ones : get number of ones in binary representaion</span>
<a name="cl-30"></a><span class="cm"> *   ( the dollar will also be printed by your program)</span>
<a name="cl-31"></a><span class="cm"> *      </span>
<a name="cl-32"></a><span class="cm"> */</span> 
<a name="cl-33"></a>
<a name="cl-34"></a><span class="k">public</span> <span class="o">:</span>
<a name="cl-35"></a>
<a name="cl-36"></a><span class="kt">unsigned</span> <span class="kt">long</span> <span class="kt">int</span> <span class="n">And</span><span class="p">(</span><span class="kt">unsigned</span> <span class="kt">long</span> <span class="kt">int</span> <span class="n">x</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="kt">long</span> <span class="kt">int</span> <span class="n">y</span><span class="p">){</span>
<a name="cl-37"></a>  <span class="k">return</span> <span class="n">x</span> <span class="o">&amp;</span> <span class="n">y</span><span class="p">;</span>
<a name="cl-38"></a><span class="p">}</span>
<a name="cl-39"></a> 
<a name="cl-40"></a><span class="kt">unsigned</span> <span class="kt">long</span> <span class="kt">int</span> <span class="n">Or</span><span class="p">(</span><span class="kt">unsigned</span> <span class="kt">long</span> <span class="kt">int</span> <span class="n">x</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="kt">long</span> <span class="kt">int</span> <span class="n">y</span><span class="p">){</span>
<a name="cl-41"></a>  <span class="k">return</span> <span class="n">x</span> <span class="o">|</span> <span class="n">y</span><span class="p">;</span>
<a name="cl-42"></a><span class="p">}</span>
<a name="cl-43"></a> 
<a name="cl-44"></a><span class="kt">unsigned</span> <span class="kt">long</span> <span class="kt">int</span> <span class="n">Xor</span><span class="p">(</span><span class="kt">unsigned</span> <span class="kt">long</span> <span class="kt">int</span> <span class="n">x</span><span class="p">,</span> <span class="kt">unsigned</span> <span class="kt">long</span> <span class="kt">int</span> <span class="n">y</span><span class="p">){</span>
<a name="cl-45"></a>  <span class="k">return</span> <span class="n">x</span> <span class="o">^</span> <span class="n">y</span><span class="p">;</span>
<a name="cl-46"></a><span class="p">}</span>
<a name="cl-47"></a> 
<a name="cl-48"></a><span class="kt">char</span> <span class="o">*</span> <span class="n">Not</span><span class="p">(</span><span class="kt">char</span> <span class="o">*</span><span class="n">x</span><span class="p">){</span>
<a name="cl-49"></a>  <span class="kt">int</span> <span class="n">i</span><span class="p">;</span>
<a name="cl-50"></a>  <span class="k">for</span><span class="p">(</span><span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span><span class="n">x</span><span class="p">[</span><span class="n">i</span><span class="p">];</span><span class="n">i</span><span class="o">++</span><span class="p">){</span>
<a name="cl-51"></a>    <span class="k">if</span><span class="p">(</span><span class="n">x</span><span class="p">[</span><span class="n">i</span><span class="p">]</span><span class="o">==</span><span class="sc">&#39;1&#39;</span><span class="p">)</span>
<a name="cl-52"></a>      <span class="n">x</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">=</span> <span class="sc">&#39;0&#39;</span><span class="p">;</span>
<a name="cl-53"></a>    <span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">x</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">==</span> <span class="sc">&#39;0&#39;</span><span class="p">)</span>
<a name="cl-54"></a>      <span class="n">x</span><span class="p">[</span><span class="n">i</span><span class="p">]</span> <span class="o">=</span> <span class="sc">&#39;1&#39;</span><span class="p">;</span>
<a name="cl-55"></a>  <span class="p">}</span>
<a name="cl-56"></a>  <span class="k">return</span> <span class="n">x</span> <span class="p">;</span>
<a name="cl-57"></a><span class="p">}</span>
<a name="cl-58"></a>
<a name="cl-59"></a>
<a name="cl-60"></a>
<a name="cl-61"></a><span class="kt">char</span> <span class="o">*</span> <span class="n">decimalToBin</span><span class="p">(</span><span class="kt">unsigned</span> <span class="kt">long</span> <span class="kt">int</span> <span class="n">decimal</span><span class="p">)</span>
<a name="cl-62"></a><span class="p">{</span>
<a name="cl-63"></a>        <span class="kt">int</span> <span class="n">bit</span> <span class="o">=</span> <span class="mi">8</span> <span class="p">;</span>
<a name="cl-64"></a>        <span class="kt">char</span> <span class="o">*</span><span class="n">res</span><span class="o">=</span><span class="p">(</span><span class="kt">char</span> <span class="o">*</span><span class="p">)</span><span class="n">malloc</span><span class="p">(</span><span class="k">sizeof</span><span class="p">(</span><span class="kt">char</span><span class="p">)</span><span class="o">*</span><span class="p">(</span><span class="n">bit</span><span class="o">+</span><span class="mi">1</span><span class="p">));</span>
<a name="cl-65"></a>        <span class="kt">int</span> <span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span>
<a name="cl-66"></a>        <span class="kt">unsigned</span> <span class="kt">long</span> <span class="kt">int</span> <span class="n">mask</span><span class="o">=</span><span class="mi">1</span><span class="o">&lt;&lt;</span><span class="p">(</span><span class="n">bit</span><span class="o">-</span><span class="mi">1</span><span class="p">);</span>
<a name="cl-67"></a>        <span class="k">while</span><span class="p">(</span><span class="n">i</span><span class="o">&lt;</span><span class="n">bit</span><span class="p">)</span>
<a name="cl-68"></a>        <span class="p">{</span>
<a name="cl-69"></a>        <span class="k">if</span><span class="p">(</span><span class="n">decimal</span><span class="o">&amp;</span><span class="n">mask</span><span class="p">)</span>
<a name="cl-70"></a>        <span class="p">{</span>
<a name="cl-71"></a>                <span class="n">res</span><span class="p">[</span><span class="n">i</span><span class="p">]</span><span class="o">=</span><span class="sc">&#39;1&#39;</span><span class="p">;</span>
<a name="cl-72"></a>        <span class="p">}</span>
<a name="cl-73"></a>        <span class="k">else</span>
<a name="cl-74"></a>        <span class="p">{</span>
<a name="cl-75"></a>                <span class="n">res</span><span class="p">[</span><span class="n">i</span><span class="p">]</span><span class="o">=</span><span class="sc">&#39;0&#39;</span><span class="p">;</span>
<a name="cl-76"></a>        <span class="p">}</span>
<a name="cl-77"></a>        <span class="n">i</span><span class="o">++</span><span class="p">;</span>
<a name="cl-78"></a>        <span class="n">mask</span><span class="o">=</span><span class="n">mask</span><span class="o">&gt;&gt;</span><span class="mi">1</span><span class="p">;</span>
<a name="cl-79"></a>        <span class="p">}</span>
<a name="cl-80"></a>        <span class="n">res</span><span class="p">[</span><span class="n">i</span><span class="p">]</span><span class="o">=</span><span class="sc">&#39;\0&#39;</span><span class="p">;</span>
<a name="cl-81"></a>        <span class="k">return</span> <span class="n">res</span><span class="p">;</span>
<a name="cl-82"></a><span class="p">}</span>
<a name="cl-83"></a>
<a name="cl-84"></a><span class="kt">unsigned</span> <span class="kt">long</span> <span class="kt">int</span> <span class="n">binToDec</span><span class="p">(</span><span class="kt">char</span> <span class="o">*</span> <span class="n">bin</span><span class="p">)</span>
<a name="cl-85"></a><span class="p">{</span>
<a name="cl-86"></a>  <span class="kt">int</span> <span class="n">bit</span> <span class="o">=</span> <span class="mi">8</span> <span class="p">;</span>
<a name="cl-87"></a>  <span class="kt">unsigned</span> <span class="kt">long</span> <span class="kt">int</span> <span class="n">power</span><span class="o">=</span><span class="mi">1</span><span class="o">&lt;&lt;</span><span class="p">(</span><span class="n">bit</span><span class="o">-</span><span class="mi">1</span><span class="p">);</span>
<a name="cl-88"></a>  <span class="kt">unsigned</span> <span class="kt">long</span> <span class="kt">int</span> <span class="n">res</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span>
<a name="cl-89"></a>  <span class="kt">int</span> <span class="n">i</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span>
<a name="cl-90"></a>  <span class="k">while</span><span class="p">(</span><span class="n">i</span><span class="o">&lt;</span><span class="n">bit</span><span class="p">)</span>
<a name="cl-91"></a>  <span class="p">{</span>
<a name="cl-92"></a>        <span class="k">if</span><span class="p">(</span><span class="n">bin</span><span class="p">[</span><span class="n">i</span><span class="p">]</span><span class="o">==</span><span class="sc">&#39;1&#39;</span><span class="p">)</span>
<a name="cl-93"></a>        <span class="p">{</span>
<a name="cl-94"></a>                <span class="n">res</span><span class="o">+=</span><span class="n">power</span><span class="p">;</span>
<a name="cl-95"></a>        <span class="p">}</span>
<a name="cl-96"></a>        <span class="n">power</span><span class="o">=</span><span class="n">power</span><span class="o">&gt;&gt;</span><span class="mi">1</span><span class="p">;</span>
<a name="cl-97"></a>        <span class="n">i</span><span class="o">++</span><span class="p">;</span>
<a name="cl-98"></a>  <span class="p">}</span>     
<a name="cl-99"></a>  <span class="k">return</span> <span class="n">res</span><span class="p">;</span>
<a name="cl-100"></a><span class="p">}</span>
<a name="cl-101"></a>
<a name="cl-102"></a>
<a name="cl-103"></a><span class="kt">void</span> <span class="n">Exit</span><span class="p">(){</span>
<a name="cl-104"></a>  
<a name="cl-105"></a>  <span class="n">clear</span><span class="p">();</span>
<a name="cl-106"></a>  <span class="n">endwin</span><span class="p">();</span>
<a name="cl-107"></a>  <span class="n">exit</span><span class="p">(</span><span class="mi">0</span><span class="p">);</span>
<a name="cl-108"></a><span class="p">}</span>
<a name="cl-109"></a>
<a name="cl-110"></a><span class="kt">int</span> <span class="n">ones</span><span class="p">(</span><span class="kt">int</span> <span class="n">x</span><span class="p">)</span>                 <span class="c1">// FUNCTION TO CALCULATE THE NUMBER OF ONEs IN BINARY REPRESENTATION OF X</span>
<a name="cl-111"></a><span class="p">{</span>
<a name="cl-112"></a>        <span class="kt">int</span> <span class="n">oneCount</span> <span class="o">=</span> <span class="mi">0</span> <span class="p">;</span>
<a name="cl-113"></a>        <span class="k">if</span><span class="p">(</span><span class="o">!</span><span class="n">x</span><span class="p">)</span>
<a name="cl-114"></a>        <span class="p">{</span>
<a name="cl-115"></a>                <span class="k">return</span> <span class="o">-</span><span class="mi">1</span><span class="p">;</span>
<a name="cl-116"></a>        <span class="p">}</span>
<a name="cl-117"></a>        
<a name="cl-118"></a>        <span class="k">while</span><span class="p">(</span><span class="n">x</span><span class="p">)</span>
<a name="cl-119"></a>        <span class="p">{</span>
<a name="cl-120"></a>                <span class="k">if</span><span class="p">(</span><span class="n">x</span> <span class="o">&amp;</span> <span class="mi">1</span><span class="p">)</span>
<a name="cl-121"></a>                        <span class="n">oneCount</span><span class="o">++</span> <span class="p">;</span>
<a name="cl-122"></a>                <span class="n">x</span> <span class="o">=</span> <span class="n">x</span> <span class="o">&gt;&gt;</span> <span class="mi">1</span> <span class="p">;</span>
<a name="cl-123"></a>        <span class="p">}</span>
<a name="cl-124"></a>        <span class="k">return</span> <span class="n">oneCount</span> <span class="p">;</span>
<a name="cl-125"></a><span class="p">}</span>
<a name="cl-126"></a>
<a name="cl-127"></a><span class="kt">int</span> <span class="n">zeros</span><span class="p">(</span><span class="kt">int</span> <span class="n">y</span><span class="p">){</span>       <span class="c1">//Counting the number of zeros in binary representation of y</span>
<a name="cl-128"></a>  <span class="kt">int</span> <span class="n">zeroCount</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
<a name="cl-129"></a>  
<a name="cl-130"></a>   <span class="k">if</span><span class="p">(</span><span class="o">!</span><span class="n">y</span><span class="p">){</span>
<a name="cl-131"></a>      <span class="k">return</span> <span class="o">-</span><span class="mi">1</span><span class="p">;</span>
<a name="cl-132"></a>   <span class="p">}</span>
<a name="cl-133"></a>  
<a name="cl-134"></a>   <span class="k">while</span><span class="p">(</span><span class="n">y</span><span class="p">){</span>
<a name="cl-135"></a>    
<a name="cl-136"></a>    <span class="k">if</span><span class="p">(</span><span class="o">!</span><span class="p">(</span><span class="n">y</span> <span class="o">&amp;</span> <span class="mi">1</span><span class="p">))</span>
<a name="cl-137"></a>      <span class="n">zeroCount</span><span class="o">++</span><span class="p">;</span>
<a name="cl-138"></a>    <span class="n">y</span> <span class="o">&gt;&gt;=</span> <span class="mi">1</span><span class="p">;</span>
<a name="cl-139"></a>  <span class="p">}</span>
<a name="cl-140"></a>  <span class="k">return</span> <span class="n">zeroCount</span><span class="p">;</span>
<a name="cl-141"></a><span class="p">}</span>
<a name="cl-142"></a>
<a name="cl-143"></a>
<a name="cl-144"></a><span class="kt">int</span> <span class="n">firstOne</span><span class="p">(</span><span class="kt">int</span> <span class="n">x</span><span class="p">)</span>             <span class="c1">// FUNCTION TO CALCULATE THE POSITION OF THE FIRST 1 FROM LSB IN BINARY REPRESENTATION OF X</span>
<a name="cl-145"></a><span class="p">{</span>
<a name="cl-146"></a>        <span class="k">if</span><span class="p">(</span><span class="o">!</span><span class="n">x</span><span class="p">)</span>
<a name="cl-147"></a>        <span class="p">{</span>
<a name="cl-148"></a>                <span class="k">return</span> <span class="o">-</span><span class="mi">1</span><span class="p">;</span>
<a name="cl-149"></a>        <span class="p">}</span>
<a name="cl-150"></a>        
<a name="cl-151"></a>        <span class="kt">int</span> <span class="n">r</span><span class="o">=</span><span class="n">x</span><span class="o">&amp;-</span><span class="p">(</span><span class="n">x</span><span class="p">);</span>
<a name="cl-152"></a>        <span class="kt">int</span> <span class="n">mask</span><span class="o">=</span><span class="mi">1</span><span class="p">;</span>
<a name="cl-153"></a>        <span class="kt">int</span> <span class="n">pos</span><span class="o">=</span><span class="mi">0</span><span class="p">;</span>
<a name="cl-154"></a>        
<a name="cl-155"></a>        <span class="k">while</span><span class="p">(</span><span class="n">r</span><span class="p">)</span>
<a name="cl-156"></a>        <span class="p">{</span>
<a name="cl-157"></a>                <span class="k">if</span><span class="p">((</span><span class="n">mask</span><span class="o">&amp;</span><span class="n">r</span><span class="p">)</span><span class="o">==</span><span class="mi">1</span><span class="p">)</span>
<a name="cl-158"></a>                <span class="p">{</span>
<a name="cl-159"></a>                        <span class="k">return</span> <span class="n">pos</span><span class="p">;</span> 
<a name="cl-160"></a>                <span class="p">}</span>
<a name="cl-161"></a>        <span class="n">pos</span><span class="o">++</span><span class="p">;</span>
<a name="cl-162"></a>        <span class="n">r</span><span class="o">=</span><span class="n">r</span><span class="o">&gt;&gt;</span><span class="mi">1</span><span class="p">;</span>
<a name="cl-163"></a>        <span class="p">}</span>
<a name="cl-164"></a><span class="p">}</span>
<a name="cl-165"></a>
<a name="cl-166"></a><span class="kt">int</span> <span class="n">nearPower</span><span class="p">(</span><span class="kt">int</span> <span class="n">x</span><span class="p">){</span>   
<a name="cl-167"></a>        <span class="c1">// Calculating nearest power of 2 for 32 bit numbers</span>
<a name="cl-168"></a>  <span class="o">--</span><span class="n">x</span><span class="p">;</span>
<a name="cl-169"></a>  <span class="n">x</span><span class="o">=</span><span class="n">x</span><span class="o">|</span><span class="p">(</span><span class="n">x</span><span class="o">&gt;&gt;</span><span class="mi">1</span><span class="p">);</span>
<a name="cl-170"></a>  <span class="n">x</span><span class="o">=</span><span class="n">x</span><span class="o">|</span><span class="p">(</span><span class="n">x</span><span class="o">&gt;&gt;</span><span class="mi">2</span><span class="p">);</span>
<a name="cl-171"></a>  <span class="n">x</span><span class="o">=</span><span class="n">x</span><span class="o">|</span><span class="p">(</span><span class="n">x</span><span class="o">&gt;&gt;</span><span class="mi">4</span><span class="p">);</span>
<a name="cl-172"></a>  <span class="n">x</span><span class="o">=</span><span class="n">x</span><span class="o">|</span><span class="p">(</span><span class="n">x</span><span class="o">&gt;&gt;</span><span class="mi">8</span><span class="p">);</span>
<a name="cl-173"></a>  <span class="n">x</span><span class="o">=</span><span class="n">x</span><span class="o">|</span><span class="p">(</span><span class="n">x</span><span class="o">&gt;&gt;</span><span class="mi">16</span><span class="p">);</span>
<a name="cl-174"></a>  <span class="o">++</span><span class="n">x</span><span class="p">;</span>
<a name="cl-175"></a>  <span class="k">return</span> <span class="n">x</span><span class="p">;</span>
<a name="cl-176"></a><span class="p">}</span>
<a name="cl-177"></a>
<a name="cl-178"></a><span class="c1">// -1 =&gt; Invalid Input</span>
<a name="cl-179"></a><span class="c1">// -2 =&gt; help</span>
<a name="cl-180"></a>
<a name="cl-181"></a><span class="kt">int</span> <span class="n">parser</span><span class="p">(</span><span class="n">string</span> <span class="n">msg</span><span class="p">){</span>                                         <span class="c1">// FUNCTION FOR PARSING THE INPUT</span>
<a name="cl-182"></a>    <span class="n">size_t</span> <span class="n">brack1</span><span class="p">,</span> <span class="n">brack2</span><span class="p">,</span> <span class="n">length_of_msg</span><span class="p">,</span> <span class="n">comma</span> <span class="p">;</span>
<a name="cl-183"></a>    <span class="kt">int</span> <span class="n">num</span> <span class="p">;</span>
<a name="cl-184"></a>    <span class="kt">unsigned</span> <span class="kt">long</span> <span class="kt">int</span> <span class="n">a</span><span class="p">,</span><span class="n">b</span> <span class="p">;</span>
<a name="cl-185"></a>    <span class="kt">char</span> <span class="o">*</span><span class="n">temp</span><span class="p">;</span> 
<a name="cl-186"></a>    
<a name="cl-187"></a>    <span class="n">length_of_msg</span> <span class="o">=</span> <span class="n">msg</span><span class="p">.</span><span class="n">length</span><span class="p">();</span>
<a name="cl-188"></a>    
<a name="cl-189"></a>    
<a name="cl-190"></a>    <span class="k">if</span><span class="p">(</span><span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;And&quot;</span><span class="p">)</span><span class="o">!=</span><span class="n">string</span><span class="o">::</span><span class="n">npos</span><span class="p">){</span>
<a name="cl-191"></a>      <span class="n">brack1</span> <span class="o">=</span> <span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;(&quot;</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-192"></a>      <span class="n">brack2</span> <span class="o">=</span> <span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;)&quot;</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-193"></a>      <span class="n">comma</span> <span class="o">=</span> <span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;,&quot;</span><span class="p">);</span>
<a name="cl-194"></a>      
<a name="cl-195"></a>      <span class="k">if</span><span class="p">(</span><span class="mi">3</span> <span class="o">+</span> <span class="n">brack2</span> <span class="o">-</span> <span class="n">brack1</span> <span class="o">+</span> <span class="mi">1</span> <span class="o">!=</span> <span class="n">length_of_msg</span><span class="p">)</span>              <span class="c1">// Checking the length of Input</span>
<a name="cl-196"></a>        <span class="k">return</span> <span class="o">-</span><span class="mi">1</span> <span class="p">;</span>
<a name="cl-197"></a>      
<a name="cl-198"></a>      <span class="k">if</span><span class="p">(</span><span class="n">brack1</span><span class="o">!=</span><span class="n">string</span><span class="o">::</span><span class="n">npos</span> <span class="o">||</span> <span class="n">brack2</span><span class="o">!=</span><span class="n">string</span><span class="o">::</span><span class="n">npos</span><span class="p">){</span>
<a name="cl-199"></a>        <span class="n">a</span> <span class="o">=</span> <span class="n">atoi</span><span class="p">(</span><span class="n">msg</span><span class="p">.</span><span class="n">substr</span><span class="p">(</span><span class="n">brack1</span><span class="o">+</span><span class="mi">1</span><span class="p">,</span><span class="n">comma</span><span class="p">).</span><span class="n">c_str</span><span class="p">());</span>
<a name="cl-200"></a>        <span class="n">b</span> <span class="o">=</span> <span class="n">atoi</span><span class="p">(</span><span class="n">msg</span><span class="p">.</span><span class="n">substr</span><span class="p">(</span><span class="n">comma</span><span class="o">+</span><span class="mi">1</span><span class="p">,</span><span class="n">brack2</span><span class="p">).</span><span class="n">c_str</span><span class="p">());</span>
<a name="cl-201"></a>        <span class="k">return</span> <span class="n">And</span><span class="p">(</span><span class="n">a</span><span class="p">,</span><span class="n">b</span><span class="p">);</span>
<a name="cl-202"></a>      <span class="p">}</span>
<a name="cl-203"></a>      
<a name="cl-204"></a>    <span class="p">}</span>
<a name="cl-205"></a>    
<a name="cl-206"></a>    
<a name="cl-207"></a>    <span class="k">if</span><span class="p">(</span><span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;Or&quot;</span><span class="p">)</span><span class="o">!=</span><span class="n">string</span><span class="o">::</span><span class="n">npos</span><span class="p">){</span>
<a name="cl-208"></a>      <span class="n">brack1</span> <span class="o">=</span> <span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;(&quot;</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-209"></a>      <span class="n">brack2</span> <span class="o">=</span> <span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;)&quot;</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-210"></a>      <span class="n">comma</span> <span class="o">=</span> <span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;,&quot;</span><span class="p">);</span>
<a name="cl-211"></a>      
<a name="cl-212"></a>      <span class="k">if</span><span class="p">(</span><span class="mi">2</span> <span class="o">+</span> <span class="n">brack2</span> <span class="o">-</span> <span class="n">brack1</span> <span class="o">+</span> <span class="mi">1</span> <span class="o">!=</span> <span class="n">length_of_msg</span><span class="p">)</span>              <span class="c1">// Checking the length of Input</span>
<a name="cl-213"></a>        <span class="k">return</span> <span class="o">-</span><span class="mi">1</span> <span class="p">;</span>
<a name="cl-214"></a>      
<a name="cl-215"></a>      <span class="k">if</span><span class="p">(</span><span class="n">brack1</span><span class="o">!=</span><span class="n">string</span><span class="o">::</span><span class="n">npos</span> <span class="o">||</span> <span class="n">brack2</span><span class="o">!=</span><span class="n">string</span><span class="o">::</span><span class="n">npos</span><span class="p">){</span>
<a name="cl-216"></a>        <span class="n">a</span> <span class="o">=</span> <span class="n">atoi</span><span class="p">(</span><span class="n">msg</span><span class="p">.</span><span class="n">substr</span><span class="p">(</span><span class="n">brack1</span><span class="o">+</span><span class="mi">1</span><span class="p">,</span><span class="n">comma</span><span class="p">).</span><span class="n">c_str</span><span class="p">());</span>
<a name="cl-217"></a>        <span class="n">b</span> <span class="o">=</span> <span class="n">atoi</span><span class="p">(</span><span class="n">msg</span><span class="p">.</span><span class="n">substr</span><span class="p">(</span><span class="n">comma</span><span class="o">+</span><span class="mi">1</span><span class="p">,</span><span class="n">brack2</span><span class="p">).</span><span class="n">c_str</span><span class="p">());</span>
<a name="cl-218"></a>        <span class="k">return</span> <span class="n">Or</span><span class="p">(</span><span class="n">a</span><span class="p">,</span><span class="n">b</span><span class="p">);</span>
<a name="cl-219"></a>      <span class="p">}</span>
<a name="cl-220"></a>      
<a name="cl-221"></a>    <span class="p">}</span>
<a name="cl-222"></a>    
<a name="cl-223"></a>    
<a name="cl-224"></a>    <span class="k">if</span><span class="p">(</span><span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;Xor&quot;</span><span class="p">)</span><span class="o">!=</span><span class="n">string</span><span class="o">::</span><span class="n">npos</span><span class="p">){</span>
<a name="cl-225"></a>      <span class="n">brack1</span> <span class="o">=</span> <span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;(&quot;</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-226"></a>      <span class="n">brack2</span> <span class="o">=</span> <span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;)&quot;</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-227"></a>      <span class="n">comma</span> <span class="o">=</span> <span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;,&quot;</span><span class="p">);</span>
<a name="cl-228"></a>      
<a name="cl-229"></a>      <span class="k">if</span><span class="p">(</span><span class="mi">3</span> <span class="o">+</span> <span class="n">brack2</span> <span class="o">-</span> <span class="n">brack1</span> <span class="o">+</span> <span class="mi">1</span> <span class="o">!=</span> <span class="n">length_of_msg</span><span class="p">)</span>              <span class="c1">// Checking the length of Input</span>
<a name="cl-230"></a>        <span class="k">return</span> <span class="o">-</span><span class="mi">1</span> <span class="p">;</span>
<a name="cl-231"></a>      
<a name="cl-232"></a>      <span class="k">if</span><span class="p">(</span><span class="n">brack1</span><span class="o">!=</span><span class="n">string</span><span class="o">::</span><span class="n">npos</span> <span class="o">&amp;&amp;</span> <span class="n">brack2</span><span class="o">!=</span><span class="n">string</span><span class="o">::</span><span class="n">npos</span><span class="p">){</span>
<a name="cl-233"></a>        <span class="n">a</span> <span class="o">=</span> <span class="n">atoi</span><span class="p">(</span><span class="n">msg</span><span class="p">.</span><span class="n">substr</span><span class="p">(</span><span class="n">brack1</span><span class="o">+</span><span class="mi">1</span><span class="p">,</span><span class="n">comma</span><span class="p">).</span><span class="n">c_str</span><span class="p">());</span>
<a name="cl-234"></a>        <span class="n">b</span> <span class="o">=</span> <span class="n">atoi</span><span class="p">(</span><span class="n">msg</span><span class="p">.</span><span class="n">substr</span><span class="p">(</span><span class="n">comma</span><span class="o">+</span><span class="mi">1</span><span class="p">,</span><span class="n">brack2</span><span class="p">).</span><span class="n">c_str</span><span class="p">());</span>
<a name="cl-235"></a>        <span class="k">return</span> <span class="n">Xor</span><span class="p">(</span><span class="n">a</span><span class="p">,</span><span class="n">b</span><span class="p">);</span>
<a name="cl-236"></a>      <span class="p">}</span>
<a name="cl-237"></a>      
<a name="cl-238"></a>    <span class="p">}</span>
<a name="cl-239"></a>    
<a name="cl-240"></a>    
<a name="cl-241"></a>    
<a name="cl-242"></a>    <span class="k">if</span><span class="p">(</span><span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;Not&quot;</span><span class="p">)</span><span class="o">!=</span><span class="n">string</span><span class="o">::</span><span class="n">npos</span><span class="p">){</span>
<a name="cl-243"></a>      <span class="n">brack1</span> <span class="o">=</span> <span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;(&quot;</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-244"></a>      <span class="n">brack2</span> <span class="o">=</span> <span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;)&quot;</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-245"></a>      <span class="k">if</span><span class="p">(</span><span class="mi">3</span> <span class="o">+</span> <span class="n">brack2</span> <span class="o">-</span> <span class="n">brack1</span> <span class="o">+</span> <span class="mi">1</span> <span class="o">!=</span> <span class="n">length_of_msg</span><span class="p">)</span>              <span class="c1">// Checking the length of Input</span>
<a name="cl-246"></a>          <span class="k">return</span> <span class="o">-</span><span class="mi">1</span> <span class="p">;</span>
<a name="cl-247"></a>      <span class="k">if</span><span class="p">(</span><span class="n">brack1</span><span class="o">!=</span><span class="n">string</span><span class="o">::</span><span class="n">npos</span> <span class="o">||</span> <span class="n">brack2</span><span class="o">!=</span><span class="n">string</span><span class="o">::</span><span class="n">npos</span><span class="p">){</span>
<a name="cl-248"></a>        <span class="n">a</span> <span class="o">=</span> <span class="n">atoi</span><span class="p">(</span><span class="n">msg</span><span class="p">.</span><span class="n">substr</span><span class="p">(</span><span class="n">brack1</span><span class="o">+</span><span class="mi">1</span><span class="p">,</span><span class="n">brack2</span><span class="p">).</span><span class="n">c_str</span><span class="p">());</span>
<a name="cl-249"></a>        <span class="n">temp</span> <span class="o">=</span> <span class="n">decimalToBin</span><span class="p">(</span><span class="n">a</span><span class="p">);</span>
<a name="cl-250"></a>        
<a name="cl-251"></a>        <span class="n">temp</span> <span class="o">=</span> <span class="n">Not</span><span class="p">(</span><span class="n">temp</span><span class="p">);</span>
<a name="cl-252"></a>        <span class="k">return</span> <span class="n">binToDec</span><span class="p">(</span><span class="n">temp</span><span class="p">);</span>
<a name="cl-253"></a>      <span class="p">}</span>
<a name="cl-254"></a>      
<a name="cl-255"></a>    <span class="p">}</span>
<a name="cl-256"></a>    
<a name="cl-257"></a>    
<a name="cl-258"></a>    <span class="k">if</span><span class="p">(</span><span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;ones&quot;</span><span class="p">)</span><span class="o">!=</span><span class="n">string</span><span class="o">::</span><span class="n">npos</span><span class="p">)</span>                          <span class="c1">// CHECKING FOR ones FUNCTION</span>
<a name="cl-259"></a>    <span class="p">{</span>
<a name="cl-260"></a>      <span class="n">brack1</span> <span class="o">=</span> <span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;(&quot;</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-261"></a>      <span class="n">brack2</span> <span class="o">=</span> <span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;)&quot;</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-262"></a>      
<a name="cl-263"></a>      
<a name="cl-264"></a>      <span class="k">if</span><span class="p">(</span><span class="mi">4</span> <span class="o">+</span> <span class="n">brack2</span> <span class="o">-</span> <span class="n">brack1</span> <span class="o">+</span> <span class="mi">1</span> <span class="o">!=</span> <span class="n">length_of_msg</span><span class="p">)</span>              <span class="c1">// Checking the length of Input</span>
<a name="cl-265"></a>        <span class="k">return</span> <span class="o">-</span><span class="mi">1</span> <span class="p">;</span>
<a name="cl-266"></a>      
<a name="cl-267"></a>      <span class="k">if</span><span class="p">(</span><span class="n">brack1</span><span class="o">!=</span><span class="n">string</span><span class="o">::</span><span class="n">npos</span> <span class="o">||</span> <span class="n">brack2</span><span class="o">!=</span><span class="n">string</span><span class="o">::</span><span class="n">npos</span><span class="p">)</span>
<a name="cl-268"></a>      <span class="p">{</span>
<a name="cl-269"></a>        <span class="n">num</span> <span class="o">=</span> <span class="n">atoi</span><span class="p">(</span><span class="n">msg</span><span class="p">.</span><span class="n">substr</span><span class="p">(</span><span class="n">brack1</span><span class="o">+</span><span class="mi">1</span><span class="p">,</span><span class="n">brack2</span><span class="p">).</span><span class="n">c_str</span><span class="p">())</span> <span class="p">;</span>
<a name="cl-270"></a>        <span class="k">return</span> <span class="n">ones</span><span class="p">(</span><span class="n">num</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-271"></a>      <span class="p">}</span>
<a name="cl-272"></a>      <span class="k">else</span>
<a name="cl-273"></a>        <span class="k">return</span> <span class="o">-</span><span class="mi">1</span> <span class="p">;</span>
<a name="cl-274"></a>    <span class="p">}</span>
<a name="cl-275"></a>    
<a name="cl-276"></a>    <span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;zeros&quot;</span><span class="p">)</span><span class="o">!=</span><span class="n">string</span><span class="o">::</span><span class="n">npos</span><span class="p">)</span>                    <span class="c1">// CHECKING FOR zeros FUNCTION</span>
<a name="cl-277"></a>    <span class="p">{</span>
<a name="cl-278"></a>      <span class="n">brack1</span> <span class="o">=</span> <span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;(&quot;</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-279"></a>      <span class="n">brack2</span> <span class="o">=</span> <span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;)&quot;</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-280"></a>      
<a name="cl-281"></a>      <span class="k">if</span><span class="p">(</span><span class="mi">5</span> <span class="o">+</span> <span class="n">brack2</span> <span class="o">-</span> <span class="n">brack1</span> <span class="o">+</span> <span class="mi">1</span> <span class="o">!=</span> <span class="n">length_of_msg</span><span class="p">)</span>              <span class="c1">// Checking the length of Input</span>
<a name="cl-282"></a>        <span class="k">return</span> <span class="o">-</span><span class="mi">1</span> <span class="p">;</span>
<a name="cl-283"></a>      
<a name="cl-284"></a>      <span class="k">if</span><span class="p">(</span><span class="n">brack1</span><span class="o">!=</span><span class="n">string</span><span class="o">::</span><span class="n">npos</span> <span class="o">||</span> <span class="n">brack2</span><span class="o">!=</span><span class="n">string</span><span class="o">::</span><span class="n">npos</span><span class="p">)</span>
<a name="cl-285"></a>      <span class="p">{</span>
<a name="cl-286"></a>        <span class="n">num</span> <span class="o">=</span> <span class="n">atoi</span><span class="p">(</span><span class="n">msg</span><span class="p">.</span><span class="n">substr</span><span class="p">(</span><span class="n">brack1</span><span class="o">+</span><span class="mi">1</span><span class="p">,</span><span class="n">brack2</span><span class="p">).</span><span class="n">c_str</span><span class="p">())</span> <span class="p">;</span>
<a name="cl-287"></a>        <span class="k">return</span> <span class="n">zeros</span><span class="p">(</span><span class="n">num</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-288"></a>      <span class="p">}</span>
<a name="cl-289"></a>      <span class="k">else</span>
<a name="cl-290"></a>        <span class="k">return</span> <span class="o">-</span><span class="mi">1</span> <span class="p">;</span>
<a name="cl-291"></a>    <span class="p">}</span>
<a name="cl-292"></a>    
<a name="cl-293"></a>    <span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;firstOne&quot;</span><span class="p">)</span><span class="o">!=</span><span class="n">string</span><span class="o">::</span><span class="n">npos</span><span class="p">)</span>                 <span class="c1">// CHECKING FOR firstOne FUNCTION</span>
<a name="cl-294"></a>    <span class="p">{</span>
<a name="cl-295"></a>      <span class="n">brack1</span> <span class="o">=</span> <span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;(&quot;</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-296"></a>      <span class="n">brack2</span> <span class="o">=</span> <span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;)&quot;</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-297"></a>      
<a name="cl-298"></a>      <span class="k">if</span><span class="p">(</span><span class="mi">8</span> <span class="o">+</span> <span class="n">brack2</span> <span class="o">-</span> <span class="n">brack1</span> <span class="o">+</span> <span class="mi">1</span> <span class="o">!=</span> <span class="n">length_of_msg</span><span class="p">)</span>              <span class="c1">// Checking the length of Input</span>
<a name="cl-299"></a>        <span class="k">return</span> <span class="o">-</span><span class="mi">1</span> <span class="p">;</span>
<a name="cl-300"></a>   
<a name="cl-301"></a>      <span class="k">if</span><span class="p">(</span><span class="n">brack1</span><span class="o">!=</span><span class="n">string</span><span class="o">::</span><span class="n">npos</span> <span class="o">||</span> <span class="n">brack2</span><span class="o">!=</span><span class="n">string</span><span class="o">::</span><span class="n">npos</span><span class="p">)</span>
<a name="cl-302"></a>      <span class="p">{</span>
<a name="cl-303"></a>        <span class="n">num</span> <span class="o">=</span> <span class="n">atoi</span><span class="p">(</span><span class="n">msg</span><span class="p">.</span><span class="n">substr</span><span class="p">(</span><span class="n">brack1</span><span class="o">+</span><span class="mi">1</span><span class="p">,</span><span class="n">brack2</span><span class="p">).</span><span class="n">c_str</span><span class="p">())</span> <span class="p">;</span>
<a name="cl-304"></a>        <span class="k">return</span> <span class="n">firstOne</span><span class="p">(</span><span class="n">num</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-305"></a>      <span class="p">}</span>
<a name="cl-306"></a>      <span class="k">else</span>
<a name="cl-307"></a>        <span class="k">return</span> <span class="o">-</span><span class="mi">1</span> <span class="p">;</span>
<a name="cl-308"></a>    <span class="p">}</span>
<a name="cl-309"></a>    
<a name="cl-310"></a>    <span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;nearPower&quot;</span><span class="p">)</span><span class="o">!=</span><span class="n">string</span><span class="o">::</span><span class="n">npos</span><span class="p">)</span>                        <span class="c1">// CHECKING FOR nearPower FUNCTION</span>
<a name="cl-311"></a>    <span class="p">{</span>
<a name="cl-312"></a>      <span class="n">brack1</span> <span class="o">=</span> <span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;(&quot;</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-313"></a>      <span class="n">brack2</span> <span class="o">=</span> <span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;)&quot;</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-314"></a>      
<a name="cl-315"></a>      <span class="k">if</span><span class="p">(</span><span class="mi">9</span> <span class="o">+</span> <span class="n">brack2</span> <span class="o">-</span> <span class="n">brack1</span> <span class="o">+</span> <span class="mi">1</span> <span class="o">!=</span> <span class="n">length_of_msg</span><span class="p">)</span>              <span class="c1">// Checking the length of Input</span>
<a name="cl-316"></a>        <span class="k">return</span> <span class="o">-</span><span class="mi">1</span> <span class="p">;</span>
<a name="cl-317"></a>      
<a name="cl-318"></a>      <span class="k">if</span><span class="p">(</span><span class="n">brack1</span><span class="o">!=</span><span class="n">string</span><span class="o">::</span><span class="n">npos</span> <span class="o">||</span> <span class="n">brack2</span><span class="o">!=</span><span class="n">string</span><span class="o">::</span><span class="n">npos</span><span class="p">)</span>
<a name="cl-319"></a>      <span class="p">{</span>
<a name="cl-320"></a>        <span class="n">num</span> <span class="o">=</span> <span class="n">atoi</span><span class="p">(</span><span class="n">msg</span><span class="p">.</span><span class="n">substr</span><span class="p">(</span><span class="n">brack1</span><span class="o">+</span><span class="mi">1</span><span class="p">,</span><span class="n">brack2</span><span class="p">).</span><span class="n">c_str</span><span class="p">())</span> <span class="p">;</span>
<a name="cl-321"></a>        <span class="k">return</span> <span class="n">nearPower</span><span class="p">(</span><span class="n">num</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-322"></a>      <span class="p">}</span>
<a name="cl-323"></a>      <span class="k">else</span>
<a name="cl-324"></a>        <span class="k">return</span> <span class="o">-</span><span class="mi">1</span> <span class="p">;</span>
<a name="cl-325"></a>    <span class="p">}</span>
<a name="cl-326"></a>    
<a name="cl-327"></a>    <span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;help&quot;</span><span class="p">)</span><span class="o">!=</span><span class="n">string</span><span class="o">::</span><span class="n">npos</span> <span class="o">&amp;&amp;</span> <span class="n">length_of_msg</span> <span class="o">==</span> <span class="mi">4</span><span class="p">){</span>                              <span class="c1">// need help?</span>
<a name="cl-328"></a>      <span class="k">return</span> <span class="o">-</span><span class="mi">2</span><span class="p">;</span>
<a name="cl-329"></a>    <span class="p">}</span>
<a name="cl-330"></a>    <span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">msg</span><span class="p">.</span><span class="n">find</span><span class="p">(</span><span class="s">&quot;exit&quot;</span><span class="p">)</span><span class="o">!=</span><span class="n">string</span><span class="o">::</span><span class="n">npos</span> <span class="o">&amp;&amp;</span> <span class="n">length_of_msg</span> <span class="o">==</span> <span class="mi">4</span><span class="p">)</span>  <span class="c1">// Exit entered</span>
<a name="cl-331"></a>      <span class="n">Exit</span><span class="p">();</span>
<a name="cl-332"></a>    <span class="k">else</span> 
<a name="cl-333"></a>      <span class="k">return</span> <span class="o">-</span><span class="mi">1</span> <span class="p">;</span>                                                       <span class="c1">// INVALID INPUT</span>
<a name="cl-334"></a>  <span class="p">}</span>
<a name="cl-335"></a><span class="p">};</span>
<a name="cl-336"></a>
<a name="cl-337"></a><span class="kt">void</span> <span class="n">initWin</span><span class="p">(</span><span class="kt">int</span> <span class="n">height</span><span class="p">,</span> <span class="kt">int</span> <span class="n">width</span><span class="p">){</span>    <span class="c1">// Function to initialize Window</span>
<a name="cl-338"></a>  
<a name="cl-339"></a>  <span class="n">initscr</span><span class="p">();</span>
<a name="cl-340"></a>  <span class="n">clear</span><span class="p">();</span>
<a name="cl-341"></a>  
<a name="cl-342"></a>  
<a name="cl-343"></a>  <span class="n">getmaxyx</span><span class="p">(</span><span class="n">stdscr</span><span class="p">,</span><span class="n">height</span><span class="p">,</span> <span class="n">width</span><span class="p">);</span>
<a name="cl-344"></a>  <span class="n">start_color</span><span class="p">();</span>
<a name="cl-345"></a>  <span class="n">init_pair</span><span class="p">(</span><span class="mi">1</span><span class="p">,</span> <span class="n">COLOR_RED</span><span class="p">,</span> <span class="n">COLOR_BLACK</span><span class="p">);</span>
<a name="cl-346"></a>  <span class="n">init_pair</span><span class="p">(</span><span class="mi">2</span><span class="p">,</span> <span class="n">COLOR_WHITE</span><span class="p">,</span> <span class="n">COLOR_BLACK</span><span class="p">);</span>
<a name="cl-347"></a><span class="p">}</span>
<a name="cl-348"></a>
<a name="cl-349"></a><span class="kt">int</span> <span class="n">main</span><span class="p">(){</span>
<a name="cl-350"></a>  
<a name="cl-351"></a>  <span class="n">BitOps</span> <span class="n">obj</span>  <span class="p">;</span>
<a name="cl-352"></a>  
<a name="cl-353"></a>  <span class="kt">int</span> <span class="n">height</span><span class="p">,</span> <span class="n">width</span><span class="p">,</span> <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">,</span> <span class="n">status</span> <span class="p">;</span>
<a name="cl-354"></a>  <span class="kt">char</span> <span class="n">temp</span><span class="p">[</span><span class="mi">20</span><span class="p">];</span>
<a name="cl-355"></a>  <span class="kt">int</span> <span class="n">c</span> <span class="o">=</span> <span class="mi">0</span><span class="p">,</span> <span class="n">cursx</span><span class="p">,</span> <span class="n">cursy</span>  <span class="p">;</span>
<a name="cl-356"></a>  
<a name="cl-357"></a>  <span class="n">initWin</span><span class="p">(</span><span class="n">height</span><span class="p">,</span> <span class="n">width</span><span class="p">);</span>
<a name="cl-358"></a>   <span class="n">string</span> <span class="n">msg</span><span class="p">(</span><span class="s">&quot;&quot;</span><span class="p">);</span> 
<a name="cl-359"></a>   <span class="n">keypad</span><span class="p">(</span><span class="n">stdscr</span><span class="p">,</span> <span class="n">TRUE</span><span class="p">);</span>
<a name="cl-360"></a>  <span class="k">while</span><span class="p">(</span><span class="mi">1</span><span class="p">){</span>
<a name="cl-361"></a>    
<a name="cl-362"></a>    <span class="n">attron</span><span class="p">(</span><span class="n">COLOR_PAIR</span><span class="p">(</span><span class="mi">1</span><span class="p">)</span><span class="o">|</span><span class="n">A_BOLD</span><span class="p">);</span>
<a name="cl-363"></a>    <span class="n">mvprintw</span><span class="p">(</span><span class="n">i</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span><span class="s">&quot;[gamex] $ &quot;</span><span class="p">);</span>
<a name="cl-364"></a>    <span class="n">attroff</span><span class="p">(</span><span class="n">COLOR_PAIR</span><span class="p">(</span><span class="mi">1</span><span class="p">));</span>
<a name="cl-365"></a>    <span class="n">msg</span> <span class="o">=</span> <span class="s">&quot;&quot;</span><span class="p">;</span>
<a name="cl-366"></a>    
<a name="cl-367"></a>    <span class="n">c</span> <span class="o">=</span> <span class="n">wgetch</span><span class="p">(</span><span class="n">stdscr</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-368"></a>    
<a name="cl-369"></a>    <span class="k">while</span><span class="p">(</span><span class="n">c</span><span class="o">!=</span><span class="mi">10</span><span class="p">)</span>
<a name="cl-370"></a>    <span class="p">{</span>
<a name="cl-371"></a>      <span class="k">if</span><span class="p">((</span><span class="n">c</span><span class="o">&gt;=</span><span class="mi">65</span> <span class="o">&amp;&amp;</span> <span class="n">c</span><span class="o">&lt;=</span><span class="mi">90</span><span class="p">)</span> <span class="o">||</span> <span class="p">(</span><span class="n">c</span><span class="o">&gt;=</span><span class="mi">97</span> <span class="o">&amp;&amp;</span> <span class="n">c</span><span class="o">&lt;=</span><span class="mi">122</span><span class="p">)</span> <span class="o">||</span> <span class="n">c</span> <span class="o">==</span> <span class="mi">40</span> <span class="o">||</span> <span class="n">c</span> <span class="o">==</span> <span class="mi">41</span> <span class="o">||</span> <span class="p">(</span><span class="n">c</span><span class="o">&gt;=</span><span class="mi">48</span> <span class="o">&amp;&amp;</span> <span class="n">c</span><span class="o">&lt;=</span><span class="mi">57</span><span class="p">))</span>
<a name="cl-372"></a>      <span class="p">{</span>
<a name="cl-373"></a>        <span class="n">msg</span><span class="p">.</span><span class="n">push_back</span><span class="p">(</span><span class="n">c</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-374"></a>      <span class="p">}</span>
<a name="cl-375"></a>      
<a name="cl-376"></a>      <span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">c</span> <span class="o">==</span> <span class="n">KEY_LEFT</span><span class="p">)</span>
<a name="cl-377"></a>      <span class="p">{</span>
<a name="cl-378"></a>        <span class="n">getyx</span><span class="p">(</span><span class="n">stdscr</span><span class="p">,</span> <span class="n">cursy</span><span class="p">,</span> <span class="n">cursx</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-379"></a>        <span class="k">if</span><span class="p">(</span><span class="n">cursx</span> <span class="o">&gt;=</span> <span class="mi">11</span><span class="p">)</span>
<a name="cl-380"></a>          <span class="n">move</span><span class="p">(</span><span class="n">cursy</span><span class="p">,</span> <span class="n">cursx</span><span class="o">-</span><span class="mi">1</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-381"></a>      <span class="p">}</span>
<a name="cl-382"></a>      
<a name="cl-383"></a>      <span class="k">else</span> <span class="k">if</span><span class="p">(</span><span class="n">c</span> <span class="o">==</span> <span class="n">KEY_RIGHT</span><span class="p">)</span>
<a name="cl-384"></a>      <span class="p">{</span>
<a name="cl-385"></a>        <span class="n">getyx</span><span class="p">(</span><span class="n">stdscr</span><span class="p">,</span> <span class="n">cursy</span><span class="p">,</span> <span class="n">cursx</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-386"></a>        <span class="k">if</span><span class="p">(</span><span class="n">cursx</span> <span class="o">&lt;=</span> <span class="mi">13</span> <span class="o">+</span> <span class="n">msg</span><span class="p">.</span><span class="n">length</span><span class="p">())</span>
<a name="cl-387"></a>          <span class="n">move</span><span class="p">(</span><span class="n">cursy</span><span class="p">,</span> <span class="n">cursx</span><span class="o">+</span><span class="mi">1</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-388"></a>      <span class="p">}</span>
<a name="cl-389"></a>      
<a name="cl-390"></a>      <span class="n">c</span> <span class="o">=</span> <span class="n">wgetch</span><span class="p">(</span><span class="n">stdscr</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-391"></a>    <span class="p">}</span>
<a name="cl-392"></a>        
<a name="cl-393"></a>    <span class="cm">/*  getstr(temp);</span>
<a name="cl-394"></a><span class="cm">    msg=temp ;*/</span>
<a name="cl-395"></a>        
<a name="cl-396"></a>    <span class="k">if</span><span class="p">(</span><span class="n">msg</span><span class="p">.</span><span class="n">empty</span><span class="p">()){</span>                    <span class="c1">// Check for Enter Key</span>
<a name="cl-397"></a>        <span class="n">i</span><span class="o">++</span> <span class="p">;</span>
<a name="cl-398"></a>        <span class="k">if</span><span class="p">(</span><span class="n">i</span> <span class="o">==</span> <span class="n">LINES</span> <span class="o">+</span> <span class="mi">1</span><span class="o">||</span> <span class="n">i</span> <span class="o">==</span> <span class="n">LINES</span> <span class="o">-</span> <span class="mi">1</span> <span class="o">||</span> <span class="n">i</span> <span class="o">==</span> <span class="n">LINES</span> <span class="o">+</span> <span class="mi">2</span> <span class="o">||</span> <span class="n">i</span> <span class="o">==</span> <span class="n">LINES</span> <span class="o">-</span> <span class="mi">2</span><span class="p">){</span>
<a name="cl-399"></a>        <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
<a name="cl-400"></a>        <span class="n">refresh</span><span class="p">();</span>
<a name="cl-401"></a>        <span class="n">clear</span><span class="p">();</span> 
<a name="cl-402"></a>        <span class="p">}</span>
<a name="cl-403"></a>        <span class="k">continue</span> <span class="p">;</span>
<a name="cl-404"></a>   <span class="p">}</span>  
<a name="cl-405"></a>    <span class="k">else</span><span class="p">{</span>
<a name="cl-406"></a>        <span class="n">status</span> <span class="o">=</span> <span class="n">obj</span><span class="p">.</span><span class="n">parser</span><span class="p">(</span><span class="n">msg</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-407"></a>      <span class="k">if</span><span class="p">(</span><span class="n">status</span><span class="o">!=-</span><span class="mi">1</span><span class="p">){</span>
<a name="cl-408"></a>        <span class="k">if</span><span class="p">(</span><span class="n">status</span> <span class="o">==</span> <span class="o">-</span><span class="mi">2</span><span class="p">){</span>                               <span class="c1">// Help Detected</span>
<a name="cl-409"></a>          <span class="n">mvprintw</span><span class="p">(</span><span class="o">++</span><span class="n">i</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;And(x,y):  Prints x &amp; y&quot;</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-410"></a>          <span class="n">mvprintw</span><span class="p">(</span><span class="o">++</span><span class="n">i</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;Or(x,y): Prints x|y &quot;</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-411"></a>          <span class="n">mvprintw</span><span class="p">(</span><span class="o">++</span><span class="n">i</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;Not(x):  Prints !x &quot;</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-412"></a>          <span class="n">mvprintw</span><span class="p">(</span><span class="o">++</span><span class="n">i</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;Xor(x,y):  Prints x^y&quot;</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-413"></a>          <span class="n">mvprintw</span><span class="p">(</span><span class="o">++</span><span class="n">i</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;ones(x): Prints the number of ones in binary representation of x&quot;</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-414"></a>          <span class="n">mvprintw</span><span class="p">(</span><span class="o">++</span><span class="n">i</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;zeros(x): Prints the number of zeroes in binary representation of x&quot;</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-415"></a>          <span class="n">mvprintw</span><span class="p">(</span><span class="o">++</span><span class="n">i</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;nearPower(x) : prints the nearest power of 2 closest to x&quot;</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-416"></a>          <span class="n">mvprintw</span><span class="p">(</span><span class="o">++</span><span class="n">i</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;firstOne(x):  Prints the mask of number x (Location of first one from LSB)&quot;</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-417"></a>        <span class="p">}</span>
<a name="cl-418"></a>        <span class="k">else</span> 
<a name="cl-419"></a>          <span class="n">mvprintw</span><span class="p">(</span><span class="o">++</span><span class="n">i</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;%d&quot;</span><span class="p">,</span> <span class="n">status</span><span class="p">)</span> <span class="p">;</span>
<a name="cl-420"></a>      <span class="p">}</span>
<a name="cl-421"></a>      <span class="k">else</span>
<a name="cl-422"></a>        <span class="n">mvprintw</span><span class="p">(</span><span class="o">++</span><span class="n">i</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="s">&quot;Invalid Input!&quot;</span><span class="p">)</span> <span class="p">;</span>  
<a name="cl-423"></a>    <span class="p">}</span>
<a name="cl-424"></a>    <span class="o">++</span><span class="n">i</span><span class="p">;</span>
<a name="cl-425"></a>   <span class="k">if</span><span class="p">(</span><span class="n">i</span> <span class="o">==</span> <span class="n">LINES</span> <span class="o">+</span> <span class="mi">1</span><span class="o">||</span> <span class="n">i</span> <span class="o">==</span> <span class="n">LINES</span> <span class="o">-</span> <span class="mi">1</span> <span class="o">||</span> <span class="n">i</span> <span class="o">==</span> <span class="n">LINES</span> <span class="o">+</span> <span class="mi">2</span> <span class="o">||</span> <span class="n">i</span> <span class="o">==</span> <span class="n">LINES</span> <span class="o">-</span> <span class="mi">2</span><span class="p">){</span>
<a name="cl-426"></a>      <span class="n">i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span>
<a name="cl-427"></a>      <span class="n">refresh</span><span class="p">();</span>
<a name="cl-428"></a>      <span class="n">clear</span><span class="p">();</span> 
<a name="cl-429"></a>   <span class="p">}</span>
<a name="cl-430"></a>  <span class="p">}</span>  
<a name="cl-431"></a>  <span class="n">refresh</span><span class="p">();</span>
<a name="cl-432"></a>  <span class="n">getch</span><span class="p">();</span>
<a name="cl-433"></a>  <span class="n">clear</span><span class="p">();</span>
<a name="cl-434"></a>
<a name="cl-435"></a>  <span class="n">endwin</span><span class="p">();</span>
<a name="cl-436"></a>  
<a name="cl-437"></a>  <span class="k">return</span> <span class="mi">0</span><span class="p">;</span>
<a name="cl-438"></a>  
<a name="cl-439"></a>  
<a name="cl-440"></a><span class="p">}</span>
</pre></div>
</td></tr></table>
        </div>
      
    
  
  </div>
  


  <div id="mask"><div></div></div>

  </div>

      </div>
    </div>

  </div>

  <div id="footer">
    <ul id="footer-nav">
      <li>Copyright © 2012 <a href="http://atlassian.com">Atlassian</a></li>
      <li><a href="http://www.atlassian.com/hosted/terms.jsp">Terms of Service</a></li>
      <li><a href="http://www.atlassian.com/about/privacy.jsp">Privacy</a></li>
      <li><a href="//bitbucket.org/site/master/issues/new">Report a Bug to Bitbucket</a></li>
      <li><a href="http://confluence.atlassian.com/x/IYBGDQ">API</a></li>
      <li><a href="http://status.bitbucket.org/">Server Status</a></li>
    </ul>
    <ul id="social-nav">
      <li class="blog"><a href="http://blog.bitbucket.org">Bitbucket Blog</a></li>
      <li class="twitter"><a href="http://www.twitter.com/bitbucket">Twitter</a></li>
    </ul>
    <h5>We run</h5>
    <ul id="technologies">
      <li><a href="http://www.djangoproject.com/">Django 1.3.1</a></li>
      <li><a href="//bitbucket.org/jespern/django-piston/">Piston 0.3dev</a></li>
      <li><a href="http://git-scm.com/">Git 1.7.10.3</a></li>
      <li><a href="http://www.selenic.com/mercurial/">Hg 2.2.2</a></li>
      <li><a href="http://www.python.org">Python 2.7.3</a></li>
      <li> | bitbucket23</li>
      
        <li><a href="/account/user/madaan/security/sessions">14 active session(s)</a></li>
      
    </ul>
  </div>

  <script src="https://dwz7u9t8u8usb.cloudfront.net/m/c3f9acf11710/js/old/global.js"></script>





  <script>
    BB.gaqPush(['_trackPageview']);
  
    BB.gaqPush(['atl._trackPageview']);

    

    

    (function () {
        var ga = document.createElement('script');
        ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
        ga.setAttribute('async', 'true');
        document.documentElement.firstChild.appendChild(ga);
    }());
  </script>

</body>
</html>
